void fn_82810558(const float *a, const float *b, float t, float *out);
void fn_827EC7C0(void *self, const float *pos, const float *dir, float t);

void fn_827EC838(void *self, float a, const float *origin, const float *dir, float b, float c)
{
    float pos[3];
    fn_82810558(dir, origin, -(a * b), pos);
    fn_827EC7C0(self, pos, dir, c);
}
