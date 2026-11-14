extern int fn_82F64020(char *buf, unsigned n, const char *fmt, ...);

void fn_82486CA8(int state, char *name)
{
  name[0] = 0;
  switch (state) {
  case 0:
    fn_82F64020(name, 0x14, "No State");
    break;
  case 1:
    fn_82F64020(name, 0x14, "Attract Sequence");
    break;
  case 2:
    fn_82F64020(name, 0x14, "Calibration");
    break;
  case 3:
    fn_82F64020(name, 0x14, "Outside Stadium");
    break;
  case 4:
    fn_82F64020(name, 0x14, "Conduct Crowd");
    break;
  case 5:
    fn_82F64020(name, 0x14, "Main Flow");
    break;
  case 6:
    fn_82F64020(name, 0x14, "Team Select");
    break;
  case 7:
    fn_82F64020(name, 0x14, "Review Flow");
    break;
  case 8:
    fn_82F64020(name, 0x14, "E3 Flow");
    break;
  case 10:
    fn_82F64020(name, 0x14, "Starting Game");
    break;
  }
}
