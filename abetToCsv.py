import os
import csv
import shutil
import subprocess
import time




print('\n' + 'Searching for ABET databases and re-formatting ABET databases into SQLite format... ' + '\n')
fileName = []
workingDir = os.getcwd()
loop = 0
DBsFound = []
for i in os.listdir(os.curdir):                             #find file names
    if i.__contains__(".ABETdb"):
        fileName.append(i)
#remove folders already full with old data
for i in fileName:
    folder = i[:-7]
    if (os.path.exists(workingDir + '/' + folder)):
        shutil.rmtree(folder)


#remove old csv to produce new ones

deleteFiles = ['tbl_Data.csv', 'tbl_Schedules.csv','tbl_Schedule_Notes.csv','tbl_Version.csv']

for j in deleteFiles:
    if (os.path.exists(j)):
        os.remove(j)
# os.remove('tbl_Data.csv')
# os.remove('tbl_Schedules.csv')
# os.remove('tbl_Schedule_Notes.csv')
# os.remove('tbl_Version.csv')

for i in fileName:                                          #convert each found file to csv files and place them in folder
    Pcommand = "bash mdb-export-all.sh " + i
    p = subprocess.Popen(Pcommand, stdout = subprocess.PIPE, close_fds = True, shell = True)
    stdout, stderr = p.communicate()
for i in fileName:                                          #move the files to the main folder, and convert each batch of relevant csv files a single .mdb file
    folderName, fileExt = fileName[loop].split(".")
    folderName = str(folderName) + str('/')
    file1, file2, file3, file4 = (str(folderName) + str('tbl_Data.csv')), (str(folderName) + str('tbl_Schedules.csv')), (str(folderName) + str('tbl_Schedule_Notes.csv')), str(folderName) + str('tbl_Version.csv')
    # shutil.copy2(file1, 'tbl_Data.csv')
    # shutil.copy2(file2, 'tbl_Schedules.csv')
    # shutil.copy2(file3, 'tbl_Schedule_Notes.csv')
    # shutil.copy2(file4, 'tbl_Version.csv')
    dbName, dbExt = fileName[loop].split('.')