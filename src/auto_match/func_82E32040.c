// Kinect Sports retail 4D5308C9, function 0x82E32040 (24 bytes).
// Gets a value through fn_82E646C8 after checking the output pointer (E_INVALIDARG when null).
extern int fn_82E646C8(unsigned int *out);

int fn_82E32040(unsigned int *out)
{
  if (out == 0) {
    return 0x80070057;
  }
  return fn_82E646C8(out);
}
