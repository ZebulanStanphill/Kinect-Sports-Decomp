typedef struct Owner_82A84F08 {
    char pad[0x2fc];
    int sum[11];
} Owner_82A84F08;

int fn_82A84F08(Owner_82A84F08 *self, unsigned int count, const int *input)
{
    unsigned int i;
    if (count) {
        if (!input)
            return 0x80070057;
        if (count >= 11)
            count = 11;
        self->sum[0] = input[0];
        for (i = 1; i < count; i++)
            self->sum[i] = self->sum[i - 1] + input[i];
        for (i = count; i < 11; i++)
            self->sum[i] = self->sum[count - 1];
    }
    return 0;
}
