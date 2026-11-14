typedef struct Info_8295E1E8 {
    unsigned int header;
    int pad4[2];
    int fieldC;
    int field10;
} Info_8295E1E8;

typedef struct Obj_8295E1E8 {
    char pad[0x104];
    Info_8295E1E8 *info;
} Obj_8295E1E8;

extern void fn_82963318(Info_8295E1E8 *info, int index, unsigned int **out);
extern int fn_8295D318(Obj_8295E1E8 *self, int mode, int a, int b, unsigned int *list0, unsigned int *list1,
                       unsigned int *list2, unsigned int count, int c, int d, int e, int f);

void fn_8295E1E8(Obj_8295E1E8 *self)
{
    Info_8295E1E8 *info = self->info;
    unsigned int count = info->header & 0xfffff;
    int b = info->fieldC;
    int a = info->field10;
    unsigned int *lists[2];

    fn_82963318(info, 0, &lists[0]);
    fn_82963318(self->info, 1, &lists[1]);
    fn_8295D318(self, 0x5f, a, b, lists[1], lists[0], 0, count, 0, 0, 0, 0);
}
