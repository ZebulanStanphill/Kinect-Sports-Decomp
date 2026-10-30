typedef struct { int *data; } Vec;
void fn_83081BD0(Vec **self, int a, int b)
{
  int ia = a * 4; char *arr = (char *)(*self)->data; int va = *(int *)(arr + ia); if (a < b) { char *ar2 = (char *)(*self)->data; *(int *)(ar2 + ia) = *(int *)(b * 4 + ar2) + *(int *)(ar2 + ia); (*self)->data[b] = a; } else { *(int *)(b*4 + arr) += va; (*self)->data[a] = b; }
}
