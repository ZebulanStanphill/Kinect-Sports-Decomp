typedef struct G_8228D868 { int pad0; int pad4; int h8; } G_8228D868;
typedef struct New_8228D868 { char pad[0x41c]; void *vt; char pad2[0x14]; } New_8228D868;
typedef struct Obj_8228D868 { char pad[0x178]; New_8228D868 *dlg; } Obj_8228D868;
extern unsigned short lbl_820E975C;
extern G_8228D868 lbl_83276728;
extern char lbl_821A8C90[];
extern char lbl_82196344[];
extern void fn_82528BF8(int, const char *, void *, int, int, int);
extern void *fn_8265C9E0(int);
extern void fn_8228E138(void);
extern void fn_8229DCA8(void *, void *, void *, void *, void *, void (*)(void), void *, int, int);
extern void fn_8229E410(void *p);
extern void *memset(void *, int, unsigned);

static __forceinline New_8228D868 *create_8228D868(void *title, void *content, void *yes, void *no, Obj_8228D868 *owner)
{
  New_8228D868 *n = (New_8228D868 *)fn_8265C9E0(0x434);
  if (n != 0) {
    n->vt = lbl_821A8C90;
    fn_8229DCA8(n, title, content, yes, no, fn_8228E138, owner, 1, 0);
    return n;
  }
  return 0;
}

void fn_8228D868(Obj_8228D868 *o)
{
  if (o->dlg == 0) {
    unsigned short title[0x100] = { lbl_820E975C };
    unsigned short content[0x400] = { lbl_820E975C };
    unsigned short yes[0x100] = { lbl_820E975C };
    unsigned short no[0x100] = { lbl_820E975C };
    fn_82528BF8(lbl_83276728.h8, "liveConnectError", title, 0x100, 0, 1);
    fn_82528BF8(lbl_83276728.h8, "liveotherplayeruploading", content, 0x400, 0, 1);
    fn_82528BF8(lbl_83276728.h8, lbl_82196344, yes, 0x100, 0, 1);
    fn_82528BF8(lbl_83276728.h8, "liveQuit", no, 0x100, 0, 1);
    o->dlg = create_8228D868(title, content, yes, no, o);
    fn_8229E410(o->dlg);
  }
}
