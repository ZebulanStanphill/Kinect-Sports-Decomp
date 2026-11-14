typedef struct Vec_82FF5750 {
    unsigned int *begin;
    unsigned int *end;
} Vec_82FF5750;

typedef struct Group_82FF5750 {
    char pad0[0x28];
    Vec_82FF5750 members;
    char pad30[4];
    int state;
    unsigned char unk38;
    unsigned char count;
} Group_82FF5750;

int fn_82FF5750(void *self, Group_82FF5750 *group, unsigned int id)
{
    Vec_82FF5750 *v = &group->members;
    unsigned int *p;
    int result = 0x1d;

    for (p = group->members.begin; p != group->members.end; p++) {
        if (*p == id) {
            result = 1;
            if ((unsigned int)(v->end - v->begin) > 1) {
                *p = v->end[-1];
            }
            v->end--;
            if (--group->count == 0) {
                group->state = 6;
            }
            break;
        }
    }
    return result;
}
