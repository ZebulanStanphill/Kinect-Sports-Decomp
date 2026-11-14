typedef struct Row_82CF6EE0 {
    int unknown;
    int size;
} Row_82CF6EE0;

typedef struct Pool_82CF6EE0 {
    char pad[0xc];
    Row_82CF6EE0 rows[17];
    int counts[17];
} Pool_82CF6EE0;

int fn_82CF6EE0(const Pool_82CF6EE0 *self)
{
    int total = 0;
    int i;

    for (i = 0; i < 17; i++)
        total += self->counts[i] * self->rows[i].size;
    return total;
}
