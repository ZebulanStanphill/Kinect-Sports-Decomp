// Kinect Sports retail 4D5308C9, function 0x82A82440 (24 bytes).
// Checks the pointer (E_INVALIDARG when null) and forwards to fn_82A823E0.
extern int fn_82A823E0(short *p);

int fn_82A82440(short *p)
{
  if (p == 0) {
    return 0x80070057;
  }
  return fn_82A823E0(p);
}
