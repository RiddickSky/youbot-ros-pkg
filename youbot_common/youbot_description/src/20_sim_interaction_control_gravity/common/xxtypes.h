/**********************************************************
 * This file is generated by 20-sim ANSI-C Code Generator  
 *
 *  file:  common\xxtypes.h
 *  model: ControlYoubotArmInteraction_Grav_v1
 *  expmt: ControlYoubotArmInteraction_Grav_v1
 *  date:  April 12, 2011
 *  time:  4:52:44 pm
 *  user:  Campuslicentie 
 *  from:  Universiteit Twente
 *  build: 4.1.2.2
 **********************************************************/

/* This file describes the typedefs that are used for integers and
   doubles. All the generated code uses these typedefs to enhance
   flexibility (in case the compiler is not Visual C++ 6 or the destination
   platform is not Windows 2000 on a Pentium 4).
   
   The user should be aware of the precision of these types, when
   these types are changed! For instance, when the destination platform 
   is a particular 8051 that does not support any doubles at all,
   one might change the XXDouble type into some float of 4 bytes.
   The results may then differ from the 20-sim results. It is advised
   to check these differences by running the code with both settings
   on the PC first (as far as this is possible).
   
   In 20-sim the following definitions are used:
   
   	typedef XXDouble double;
	typedef XXInteger int;
   
   so that 
   
   	XXDouble is 8 bytes (64 bits) with a range of [-1.7E+308, 1.7E+308]
   	XXInteger is 4 bytes (32 bits) with a range of [-2147483648, 2147483647]
	XXCharacter is 1 byte (8 bits) with a value of [0, 255]
   	XXBoolean is 1 byte (8 bits) with a value of 0 or 1
*/ 
   
#ifndef XX_TYPES_H
#define XX_TYPES_H
   
/* the mentioned typedefs */
typedef double XXDouble;
typedef int XXInteger;
typedef char XXCharacter;
typedef char XXBoolean;
typedef char* XXString;
  
/* defines */
#define XXTRUE 	1
#define XXFALSE 	0

/* string defines */
#define XXString2Double *(XXDouble *)&
#define XXDouble2String *(XXString *)&
   
#endif

