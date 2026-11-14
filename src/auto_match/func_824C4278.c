typedef struct List_824C4278 {
  char pad0[0x10];
  void **begin;
  void **end;
} List_824C4278;

extern void *lbl_83265988;
extern unsigned int fn_823AB478(void *p);
extern int fn_82A1BFA8(unsigned int id);

int fn_824C4278(int index, unsigned int id, List_824C4278 *list)
{
  int count = list->end - list->begin;
  if (index == count) {
    if (lbl_83265988 != 0 && fn_823AB478(lbl_83265988) == id) {
      return 0;
    }
    if (fn_82A1BFA8(id) == 2) {
      return (index == 1) + 4;
    }
    return 6;
  }
  if (index > count) {
    if (lbl_83265988 != 0 && fn_823AB478(lbl_83265988) == id) {
      return 1;
    }
    if (fn_82A1BFA8(id) == 2) {
      return (index == 1) + 4;
    }
    return 6;
  }
  if (lbl_83265988 != 0 && fn_823AB478(lbl_83265988) == id) {
    return 2;
  }
  return (fn_82A1BFA8(id) == 2 ? 5 : 6);
}
