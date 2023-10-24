/******************************************************************/
/* THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT EDIT IT!!!!!! */
/******************************************************************/
typedef struct _tbl_Schedules
{
	long	sid;
	char *	sname;
	char *	senviro;
	char *	smachinename;
	char *	sversion;
srundate;
sfinal;
	char *	ze_guid;
	char *	zs_guid;
	long	sreccount;

} tbl_Schedules ;

typedef struct _tbl_Schedule_Notes
{
	long	sid;
	char *	nname;
	char *	nvalue;

} tbl_Schedule_Notes ;

typedef struct _tbl_Data
{
	long	sid;
dtime;
	long	dauto;
	long	devent;
	char *	deventtext;
	char *	deffecttext;
	char *	dalttext;
	long	dgroup;
	long	dargcount;
	char *	dtext1;
dvalue1;
	char *	dtext2;
dvalue2;
	char *	dtext3;
dvalue3;
	char *	dtext4;
dvalue4;
	char *	dtext5;
dvalue5;

} tbl_Data ;

typedef struct _tbl_Version
{
	char *	buildnum;
compactdate;

} tbl_Version ;

typedef struct _tbl_Zip_Schedule
{
	char *	zs_guid;
	char *	zs_name;
	char *	zs_version;
zs_bytes;

} tbl_Zip_Schedule ;

typedef struct _tbl_Zip_Environment
{
	char *	ze_guid;
	char *	ze_name;
ze_bytes;

} tbl_Zip_Environment ;

