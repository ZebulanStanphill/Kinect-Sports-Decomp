typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern void *fn_82230110(void *, const char *);
extern char lbl_82196582[];

void *fn_8288ACA0(void *self, int unused, unsigned int reason)
{
  const char *s;
  switch (reason) {
  case 0:
    s = "Unknown leave reason";
    break;
  case 1:
    s = "We are not leaving a session!";
    break;
  case 2:
    s = "Session create failed - probably given bad parameters";
    break;
  case 3:
    s = "Asked to create machine with a slotId which we already know about but not MUID";
    break;
  case 4:
    s = "asked to create a machine with a MUID which is known but bad slotId";
    break;
  case 5:
    s = "party system: connected in state 'PARTY_JOIN_SUB_STATE_LEAVE'";
    break;
  case 6:
    s = "party system: bad vars";
    break;
  case 7:
    s = "connectOk==false in XOMATCH_STATE_CREATED";
    break;
  case 8:
    s = "connectOk==false in XOMATCH_STATE_JOINED";
    break;
  case 9:
    s = "owner leave and can't migrate as we weren't joined properly (or we've started to leave)";
    break;
  case 10:
    s = "migration failed during tick";
    break;
  case 11:
    s = "failure to force start migration";
    break;
  case 12:
    s = "we want to migrate but we're not in a valid state to start it";
    break;
  case 13:
    s = "bad local state to start migration - probably not joined properly or already migrating";
    break;
  case 14:
    s = "The global netobj timed out before anyone claimed it";
    break;
  case 15:
    s = "We've been asked to delete the global netobj";
    break;
  case 16:
    s = "arbitration: failed";
    break;
  case 17:
    s = "rejected from match in join reply message";
    break;
  case 18:
    s = "timeout connecting to owner";
    break;
  case 19:
    s = "timeout connecting to others";
    break;
  case 20:
    s = "Timed out waiting for global net obj on join";
    break;
  case 21:
    s = "leaving current session as we're joining a party session and game says this is ok";
    break;
  case 22:
    s = "Connection failure";
    break;
  default:
    s = lbl_82196582;
    break;
  }
  fn_82230110(self, s);
  return self;
}
