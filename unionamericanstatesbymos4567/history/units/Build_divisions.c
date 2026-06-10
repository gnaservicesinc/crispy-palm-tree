#ifndef _GNU_SOURCE
#define _GNU_SOURCE 1
#endif
#ifndef  _XOPEN_SOURCE_EXTENDED
#define _XOPEN_SOURCE_EXTENDED
#endif
#ifndef __USE_FILE_OFFSET64
#define __USE_FILE_OFFSET64
#endif
#ifndef _FILE_OFFSET_BITS 
#define _FILE_OFFSET_BITS 64
#endif
#ifndef _FORTIFY_SOURCE
#define _FORTIFY_SOURCE 2
#endif
#ifndef __USE_FORTIFY_LEVEL
#define __USE_FORTIFY_LEVEL 2
#endif
#if __STDC_VERSION__ < 199901L
	# if __GNUC__ >= 2
		#  define __func__ __FUNCTION__
     	# else
		#  define __func__ "<unknown>"
     	# endif
#endif
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <signal.h>
#include <time.h>
#include <uchar.h>
#include <string.h>
#include <wchar.h>
#include <wctype.h>
#include <iso646.h>
#include <ctype.h>
#include <limits.h>
#include <locale.h>
#include <setjmp.h>
#include <stdarg.h>
#include <stddef.h>
#include <assert.h>
#include <errno.h>
#include <fenv.h>
#include <float.h>
#include <inttypes.h>
#include <unistd.h>
#include <memory.h>
#include <dirent.h>
#include <pwd.h>
#include <dlfcn.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/time.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/dir.h>
#include <sys/syscall.h>
unsigned char utf_8_byte_order_mark[] = {0xef, 0xbb, 0xbf};

int print_oob(char tag[], char name[]);
int do_print_oob(char tag[], char name[], char filepath[]);

int main(int argc,char *argv[]){
 print_oob("UMI","Michigan");
 print_oob("UIL","Illinois");
 print_oob("UNY","New_York");
 print_oob("UAL","Alabama");
 print_oob("UCA","California");
 print_oob("UTX","Texas");
 print_oob("UIN","Indiana");
 print_oob("UCI","Carolinas");
 print_oob("UDK","Dakota");
 print_oob("UMN","Minnesota");
 print_oob("UEN","New_England");
 print_oob("UKY","Kentucky");
 print_oob("UTN","Tennessee");
 print_oob("UMS","Mississippi");
 print_oob("UFL","Florida");
 print_oob("UGO","Georgia");
 print_oob("UVA","Virginia");
 print_oob("UNE","Nebraska");
 print_oob("UME","Missouri");
 print_oob("UAR","Arkansas");
 print_oob("ULA","Louisiana");
 print_oob("UWI","Wisconsin");
 print_oob("UOK","Oklahoma");
 print_oob("UIA","Iowa");
 print_oob("UKA","Kansas");
 print_oob("UOH","Ohio");
 print_oob("UPE","Pennsylvania");
 print_oob("UML","Maryland");
 print_oob("UNJ","New_Jersey");
 print_oob("UWA","Washington");
 print_oob("UID","Idaho");
 print_oob("UAZ","Arizona");
 print_oob("UUT","Utah");
 print_oob("UNV","Nevada");
 print_oob("UOR","Oregon");
 print_oob("UMO","Montana");
 print_oob("UCO","Colorado");
 print_oob("UMX","New_Mexico");
 print_oob("UWY","Wyoming");
 print_oob("UHW","Hawaii");
 print_oob("UAK","Alaska");
	return(0);
}

int print_oob(char tag[], char name[]) {

char filepath_1[4096];
char filepath_2[4096];

//strcpy (filepath_1,tag);
//strcat (filepath_1,"_1936.txt");
strcpy (filepath_2,tag);
strcat (filepath_2,".txt");
//do_print_oob(tag,name,filepath_1);
do_print_oob(tag,name,filepath_2);
}

int do_print_oob(char tag[], char name[], char filepath[]) {
FILE * pFile;
pFile = fopen (filepath,"w");
setlocale(LC_CTYPE, "en_US.UTF-8");

fprintf(pFile,"﻿##### Division Templates #####\ndivision_template = {\n\tname = \"%s State Infantry Division\"\n\tdivision_names_group = USA_INF_01\n\tregiments = {\n\t\tinfantry = { x = 0 y = 0 }\n\t\tinfantry = { x = 0 y = 1 }\n\t\tinfantry = { x = 0 y = 2 }\n\t\tinfantry = { x = 0 y = 3 }\n\t\tinfantry = { x = 0 y = 4 }\n\t\tinfantry = { x = 1 y = 0 }\n\t\tinfantry = { x = 1 y = 1 }\n\t\tinfantry = { x = 1 y = 2 }\n\t\tinfantry = { x = 1 y = 3 }\n\t\tinfantry = { x = 1 y = 4 }\n\t\tinfantry = { x = 2 y = 0 }\n\t\tinfantry = { x = 2 y = 1 }\n\t\tinfantry = { x = 2 y = 2 }\n\t\tinfantry = { x = 2 y = 3 }\n\t\tinfantry = { x = 2 y = 4 }\n\t\tinfantry = { x = 3 y = 0 }\n\t\tinfantry = { x = 3 y = 1 }\n\t\tinfantry = { x = 3 y = 2 }\n\t\tinfantry = { x = 3 y = 3 }\n\t\tinfantry = { x = 3 y = 4 }\n\n\t}\n\tsupport = {\n\t\tartillery = { x = 0 y = 0 }  # US Hvy Field Arty consisted of 2 Bns, 155mm howitzers\n\t\tengineer = { x = 0 y = 1 }   # US Eng Rgt consisted of 2 Bns\n\t}\n}\ndivision_template = {\n\tname = \"%s State National Guard Division\"\n\tdivision_names_group = USA_INF_01\n\tregiments = {\n\t\tmotorized = { x = 0 y = 0 }\n\t\tmotorized = { x = 0 y = 1 }\n\t\tmotorized = { x = 0 y = 2 }\n\t\tmotorized = { x = 0 y = 3 }\n\t\tmotorized = { x = 0 y = 4 }\n\t\tmotorized = { x = 1 y = 0 }\n\t\tmotorized = { x = 1 y = 1 }\n\t\tmotorized = { x = 1 y = 2 }\n\t\tmotorized = { x = 1 y = 3 }\n\t\tmotorized = { x = 1 y = 4 }\n\t\tmotorized = { x = 2 y = 0 }\n\t\tmotorized = { x = 2 y = 1 }\n\t\tmotorized = { x = 2 y = 2 }\n\t\tmotorized = { x = 2 y = 3 }\n\t\tmotorized = { x = 2 y = 4 }\n\t\tmotorized = { x = 3 y = 0 }\n\t\tmotorized = { x = 3 y = 1 }\n\t\tmotorized = { x = 3 y = 2 }\n\t\tmotorized = { x = 3 y = 3 }\n\t\tmotorized = { x = 3 y = 4 }\n\n\t}\n\tsupport = {\n\t\tartillery = { x = 0 y = 0 }  # US Hvy Field Arty consisted of 2 Bns, 155mm howitzers\n\t\tengineer = { x = 0 y = 1 }   # US Eng Rgt consisted of 2 Bns\n\t}\n}\ndivision_template = {\n\tname = \"%s\'s Homeland Shield Division\"\n\tdivision_names_group = USA_INF_01\n\tregiments = {\n\t\tmechanized = { x = 0 y = 0 }\n\t\tmechanized = { x = 0 y = 1 }\n\t\tmechanized = { x = 0 y = 2 }\n\t\tmechanized = { x = 0 y = 3 }\n\t\tmechanized = { x = 0 y = 4 }\n\t\tmechanized = { x = 1 y = 0 }\n\t\tmechanized = { x = 1 y = 1 }\n\t\tmechanized = { x = 1 y = 2 }\n\t\tmechanized = { x = 1 y = 3 }\n\t\tmechanized = { x = 1 y = 4 }\n\t\tmechanized = { x = 2 y = 0 }\n\t\tmechanized = { x = 2 y = 1 }\n\t\tmechanized = { x = 2 y = 2 }\n\t\tmechanized = { x = 2 y = 3 }\n\t\tmechanized = { x = 2 y = 4 }\n\t\tmechanized = { x = 3 y = 0 }\n\t\tmechanized = { x = 3 y = 1 }\n\t\tmechanized = { x = 3 y = 2 }\n\t\tmechanized = { x = 3 y = 3 }\n\t\tmechanized = { x = 3 y = 4 }\n\t}\n\tsupport = {\n\t\tartillery = { x = 0 y = 0 }  # US Hvy Field Arty consisted of 2 Bns, 155mm howitzers\n\t\tengineer = { x = 0 y = 1 }   # US Eng Rgt consisted of 2 Bns\n\t}\n}\ndivision_template = {\n\tname = \"%s State Police Division\"\n\tdivision_names_group = USA_CAV_01\n\tregiments = {\n\t\tcavalry = { x = 0 y = 0 }\n\t\tcavalry = { x = 0 y = 1 }\n\t\tcavalry = { x = 0 y = 2 }\n\t\tcavalry = { x = 0 y = 3 }\n\t\tcavalry = { x = 0 y = 4 }\n\t\tcavalry = { x = 1 y = 0 }\n\t\tcavalry = { x = 1 y = 1 }\n\t\tcavalry = { x = 1 y = 2 }\n\t\tcavalry = { x = 1 y = 3 }\n\t\tcavalry = { x = 1 y = 4 }\n\t\tcavalry = { x = 2 y = 0 }\n\t\tcavalry = { x = 2 y = 1 }\n\t\tcavalry = { x = 2 y = 2 }\n\t\tcavalry = { x = 2 y = 3 }\n\t\tcavalry = { x = 2 y = 4 }\n\t\tcavalry = { x = 3 y = 0 }\n\t\tcavalry = { x = 3 y = 1 }\n\t\tcavalry = { x = 3 y = 2 }\n\t\tcavalry = { x = 3 y = 3 }\n\t\tcavalry = { x = 3 y = 4 }\n\t}\n\tsupport = {\n\t\tartillery = { x = 0 y = 0 }  # US Hvy Field Arty consisted of 2 Bns, 155mm howitzers\n\t\tengineer = { x = 0 y = 1 }   # US Eng Rgt consisted of 2 Bns\n\t}\n}\ninstant_effect = {\n\tadd_equipment_production = {\n\t\tequipment = {\n\t\t\ttype = infantry_equipment_1\n\t\t\tcreator = %s\n\t\t}\n\t\trequested_factories = 6\n\t\tprogress = 0.9\n\t\tefficiency = 100\n\t}\n\n\tadd_equipment_production = {\n\t\tequipment = {\n\t\t\ttype = support_equipment_1\n\t\t\tcreator = %s\n\t\t}\n\t\trequested_factories = 2\n\t\tprogress = 0.8\n\t\tefficiency = 100\n\t}\n\n\tadd_equipment_production = {\n\t\tequipment = {\n\t\t\ttype = artillery_equipment_1\n\t\t\tcreator = %s\n\t\t}\n\t\trequested_factories = 1\n\t\tprogress = 0.9\n\t\tefficiency = 100\n\t}\n\n\tadd_equipment_production = {\n\t\tequipment = {\n\t\t\ttype = cv_fighter_equipment_1\n\t\t\tcreator = %s \n\t\t}\n\t\trequested_factories = 1\n\t\tprogress = 0.9\n\t\tefficiency = 100\n\t}\n}\n#####################\n",(char*)name, (char*)name,(char*)name,(char*) name,(char*) tag,(char*) tag,(char*) tag,(char*) tag);
fclose (pFile);

}