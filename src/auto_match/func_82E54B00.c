extern int memcmp(const void *, const void *, unsigned);
extern char lbl_8214C2F0[];
extern char lbl_8214C300[];
extern char lbl_8214C310[];
extern char lbl_8214C320[];
typedef struct Guid_82E54B00 { unsigned int d[4]; } Guid_82E54B00;
typedef struct Obj_82E54B00 { char pad[8]; char lock[0x3c]; Guid_82E54B00 id; } Obj_82E54B00;
extern void fn_82E50CB8(void *lock);
extern void fn_82E50F10(void *lock);

int fn_82E54B00(Obj_82E54B00 *o, const Guid_82E54B00 *id)
{
  if (memcmp(lbl_8214C2F0, id, 16) != 0 && memcmp(lbl_8214C300, id, 16) != 0 &&
      memcmp(lbl_8214C310, id, 16) != 0 && memcmp(lbl_8214C320, id, 16) != 0)
    return 0x80070057;
  fn_82E50CB8(o->lock);
  o->id = *id;
  fn_82E50F10(o->lock);
  return 0;
}
