typedef struct _GUID { unsigned long Data1; unsigned short Data2; unsigned short Data3; unsigned char Data4[8]; } GUID;

extern int memcmp(const void *, const void *, unsigned);
extern GUID lbl_821533D8;
extern GUID lbl_82153408;
extern GUID lbl_821533E8;
extern GUID lbl_82153448;

typedef struct {
  char pad0[0x2c];
  GUID format;
  int f3c;
  unsigned int size;
  char *data;
} Obj_82E26518;

void *fn_82E26518(Obj_82E26518 *o)
{
  if (memcmp(&o->format, &lbl_821533D8, 16) == 0 || memcmp(&o->format, &lbl_82153408, 16) == 0) {
    if (o->size < 0x58)
      return 0;
    return o->data + 0x30;
  }
  if (memcmp(&o->format, &lbl_821533E8, 16) == 0 || memcmp(&o->format, &lbl_82153448, 16) == 0) {
    if (o->size < 0x70)
      return 0;
    return o->data + 0x48;
  }
  return 0;
}
