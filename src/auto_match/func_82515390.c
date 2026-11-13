extern void fn_82230110(int, const char *);
extern void fn_8288ACA0(int);
extern char lbl_82196582[];

int fn_82515390(int param_1, int param_2, unsigned int param_3)
{
  const char *s;

  if (param_3 < 0x17) {
    fn_8288ACA0(param_1);
  }
  else {
    switch (param_3) {
    case 0x17: s = "liveMainRelease()"; break;
    case 0x18: s = "Jumping scene"; break;
    case 0x19: s = "Invalid profile"; break;
    case 0x1a: s = "Profiles changed"; break;
    case 0x1b: s = "Profile not gold or connected to live"; break;
    case 0x1c: s = "Migration during arbitration"; break;
    case 0x1e: s = "Matchmaking stop"; break;
    case 0x1f: s = "User requested to change session parameters"; break;
    case 0x1d: s = "Manual left game from pause screen"; break;
    case 0x20: s = "Left session with scene lifetime because the scene was killed"; break;
    default: s = lbl_82196582;
    }
    fn_82230110(param_1, s);
  }
  return param_1;
}
