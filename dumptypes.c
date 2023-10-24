/******************************************************************/
/* THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT EDIT IT!!!!!! */
/******************************************************************/
#include <stdio.h>
#include "dumptypes.h"
void dump_tbl_Schedules (tbl_Schedules x)
{
	fprintf (stdout, "**************** tbl_Schedules ****************\n");
	fprintf (stdout, "x.sid = ");
	dump_long (x.sid);
	fprintf (stdout, "x.sname = ");
	dump_string (x.sname);
	fprintf (stdout, "x.senviro = ");
	dump_string (x.senviro);
	fprintf (stdout, "x.smachinename = ");
	dump_string (x.smachinename);
	fprintf (stdout, "x.sversion = ");
	dump_string (x.sversion);
	fprintf (stdout, "x.srundate = ");
srundate);
	fprintf (stdout, "x.sfinal = ");
sfinal);
	fprintf (stdout, "x.ze_guid = ");
	dump_string (x.ze_guid);
	fprintf (stdout, "x.zs_guid = ");
	dump_string (x.zs_guid);
	fprintf (stdout, "x.sreccount = ");
	dump_long (x.sreccount);
}

void dump_tbl_Schedule_Notes (tbl_Schedule_Notes x)
{
	fprintf (stdout, "**************** tbl_Schedule_Notes ****************\n");
	fprintf (stdout, "x.sid = ");
	dump_long (x.sid);
	fprintf (stdout, "x.nname = ");
	dump_string (x.nname);
	fprintf (stdout, "x.nvalue = ");
	dump_string (x.nvalue);
}

void dump_tbl_Data (tbl_Data x)
{
	fprintf (stdout, "**************** tbl_Data ****************\n");
	fprintf (stdout, "x.sid = ");
	dump_long (x.sid);
	fprintf (stdout, "x.dtime = ");
dtime);
	fprintf (stdout, "x.dauto = ");
	dump_long (x.dauto);
	fprintf (stdout, "x.devent = ");
	dump_long (x.devent);
	fprintf (stdout, "x.deventtext = ");
	dump_string (x.deventtext);
	fprintf (stdout, "x.deffecttext = ");
	dump_string (x.deffecttext);
	fprintf (stdout, "x.dalttext = ");
	dump_string (x.dalttext);
	fprintf (stdout, "x.dgroup = ");
	dump_long (x.dgroup);
	fprintf (stdout, "x.dargcount = ");
	dump_long (x.dargcount);
	fprintf (stdout, "x.dtext1 = ");
	dump_string (x.dtext1);
	fprintf (stdout, "x.dvalue1 = ");
dvalue1);
	fprintf (stdout, "x.dtext2 = ");
	dump_string (x.dtext2);
	fprintf (stdout, "x.dvalue2 = ");
dvalue2);
	fprintf (stdout, "x.dtext3 = ");
	dump_string (x.dtext3);
	fprintf (stdout, "x.dvalue3 = ");
dvalue3);
	fprintf (stdout, "x.dtext4 = ");
	dump_string (x.dtext4);
	fprintf (stdout, "x.dvalue4 = ");
dvalue4);
	fprintf (stdout, "x.dtext5 = ");
	dump_string (x.dtext5);
	fprintf (stdout, "x.dvalue5 = ");
dvalue5);
}

void dump_tbl_Version (tbl_Version x)
{
	fprintf (stdout, "**************** tbl_Version ****************\n");
	fprintf (stdout, "x.buildnum = ");
	dump_string (x.buildnum);
	fprintf (stdout, "x.compactdate = ");
compactdate);
}

void dump_tbl_Zip_Schedule (tbl_Zip_Schedule x)
{
	fprintf (stdout, "**************** tbl_Zip_Schedule ****************\n");
	fprintf (stdout, "x.zs_guid = ");
	dump_string (x.zs_guid);
	fprintf (stdout, "x.zs_name = ");
	dump_string (x.zs_name);
	fprintf (stdout, "x.zs_version = ");
	dump_string (x.zs_version);
	fprintf (stdout, "x.zs_bytes = ");
zs_bytes);
}

void dump_tbl_Zip_Environment (tbl_Zip_Environment x)
{
	fprintf (stdout, "**************** tbl_Zip_Environment ****************\n");
	fprintf (stdout, "x.ze_guid = ");
	dump_string (x.ze_guid);
	fprintf (stdout, "x.ze_name = ");
	dump_string (x.ze_name);
	fprintf (stdout, "x.ze_bytes = ");
ze_bytes);
}

