typedef struct { short Year, Month, Day, Hour, Minute, Second, Milliseconds, Weekday; } TF;
typedef struct { short Year, Month, DayOfWeek, Day, Hour, Minute, Second, Milliseconds; } ST;
extern void KeQuerySystemTime(__int64 *t);
extern void fn_8306C7F8(__int64 *t);
extern void RtlTimeToTimeFields(__int64 *t, TF *f);

void fn_8306C4F8(ST *o)
{
  __int64 a, b, c;
  TF f;
  KeQuerySystemTime(&a);
  fn_8306C7F8(&b);
  c = a - b;
  RtlTimeToTimeFields(&c, &f);
  o->Year = f.Year;
  o->Month = f.Month;
  o->DayOfWeek = f.Weekday;
  o->Day = f.Day;
  o->Hour = f.Hour;
  o->Minute = f.Minute;
  o->Second = f.Second;
  o->Milliseconds = f.Milliseconds;
}
