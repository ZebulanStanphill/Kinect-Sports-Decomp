// Kinect Sports retail 4D5308C9, function 0x82A82428 (24 bytes).
// Checks the pointer (E_INVALIDARG when null) and forwards to fn_82A82350.
extern int fn_82A82350(short *p);

int fn_82A82428(short *p)
{
  if (p == 0) {
    return 0x80070057;
  }
  return fn_82A82350(p);
}
