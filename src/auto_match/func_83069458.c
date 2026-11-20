typedef struct Set_83069458 {
    int words[12];
} Set_83069458;

typedef struct Iterator_83069458 {
    int words[4];
} Iterator_83069458;

typedef struct Node_83069458 {
    char pad0[0x38];
    int label; /* 0x38 */
} Node_83069458;

extern void fn_83061508(Set_83069458 *set);
extern void fn_830635A0(void *self, int a, Set_83069458 *set, int b, int c);
extern int fn_830604F0(Set_83069458 *set);
extern int *fn_83065B90(unsigned int size);
extern void *memset(void *dst, int value, unsigned int size);
extern void fn_83060380(Iterator_83069458 *it, Set_83069458 *set);
extern void fn_83060CB0(Iterator_83069458 *it);
extern unsigned char fn_830603C0(Iterator_83069458 *it);
extern void *fn_830603D0(Iterator_83069458 *it);
extern void fn_8305D6B8(void *item, float *point);
extern const float *fn_8305D618(void *item);
extern void fn_82810558(const float *a, const float *b, float t, float *out);
extern Node_83069458 *fn_83062E78(void *self, float *point);
extern void fn_83060CD0(Iterator_83069458 *it);
extern void fn_83065BA8(void *p);
extern void fn_83061F30(Set_83069458 *set);

int fn_83069458(void *self, int *count, int a, float scale, int b, int c)
{
    Set_83069458 set;
    Iterator_83069458 it;
    float point[3];
    int result;
    int *votes;
    unsigned char found;
    void *item;
    Node_83069458 *node;
    int label;
    int best;
    int bestIndex;
    int i;

    fn_83061508(&set);
    fn_830635A0(self, a, &set, b, c);
    result = -1;
    if (fn_830604F0(&set) > 0) {
        found = 0;
        votes = fn_83065B90(*count * 4);
        memset(votes, 0, *count * 4);
        fn_83060380(&it, &set);
        fn_83060CB0(&it);
        while (!fn_830603C0(&it)) {
            item = fn_830603D0(&it);
            fn_8305D6B8(item, point);
            fn_82810558(fn_8305D618(item), point, scale * 50.0f, point);
            node = fn_83062E78(self, point);
            if (node != 0) {
                label = node->label;
                if (label > 0) {
                    found = 1;
                    votes[node->label - 1]++;
                }
            }
            fn_83060CD0(&it);
        }
        if (found) {
            best = -1;
            bestIndex = -1;
            for (i = 0; i < *count; i++) {
                if (votes[i] > best) {
                    best = votes[i];
                    bestIndex = i;
                }
            }
            result = bestIndex + 1;
        }
        fn_83065BA8(votes);
    }
    fn_83061F30(&set);
    return result;
}
