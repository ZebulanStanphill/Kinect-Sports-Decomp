extern void fn_82359C18(void *member);
extern char lbl_821AF1C8[];
extern char lbl_821AF4E8[];
extern char lbl_821AF508[];
extern char lbl_821AF518[];
extern char lbl_821AF528[];
extern char lbl_821AF538[];

typedef struct {
  void *vt;
  char pad04[0x3c];
  char member[0x98];
} Sub_82314318;

typedef struct {
  void *vt;
  char pad04[0x10];
  void *vt14;
  char pad18[0x8];
  void *vt20;
  char pad24[0x2c];
  Sub_82314318 sub;
  char pad[0x130 - 0x50 - sizeof(Sub_82314318)];
  void *vt130;
} Obj_82314318;

void fn_82314318(Obj_82314318 *self)
{
  Sub_82314318 *sub;

  self->vt = lbl_821AF4E8;
  self->vt130 = lbl_821AF538;
  sub = &self->sub;
  sub->vt = lbl_821AF528;
  fn_82359C18(sub->member);
  self->vt20 = lbl_821AF518;
  self->vt14 = lbl_821AF508;
  self->vt = lbl_821AF1C8;
}
