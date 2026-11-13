typedef struct { char pad[0xa0]; void *inner; } Mgr_82E66588;
extern Mgr_82E66588 *lbl_8323FF68;
extern int fn_82EE91C0(void *obj, void *arg);

int fn_82E66588(void *arg)
{
  if (lbl_8323FF68 == 0) {
    return 0xc00d36bb;
  }
  return fn_82EE91C0(lbl_8323FF68->inner, arg);
}
