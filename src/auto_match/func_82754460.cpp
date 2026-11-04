struct Less_82754460 {
};

struct Hash_82754460 {
    Less_82754460 comp;
    Hash_82754460() : comp() {}
};

extern "C" {
int fn_82753078(Hash_82754460 *t, int k);
void fn_82753DF8(void *a, void *b, int *k, int r);
}

extern "C" void fn_82754460(void *self, int *key)
{
    Hash_82754460 h;
    fn_82753DF8(self, self, key, fn_82753078(&h, *key));
}
