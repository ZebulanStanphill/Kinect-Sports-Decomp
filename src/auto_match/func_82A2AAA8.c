typedef struct { unsigned int lo, hi; } LI;
typedef struct { short Year, Month, Day, Hour, Minute, Second, Milliseconds, Weekday; } TF;
typedef struct { short Year, Month, DayOfWeek, Day, Hour, Minute, Second, Milliseconds; } ST;
extern void RtlTimeToTimeFields(LI *t, TF *f);
int fn_82A2AAA8(LI *t, ST *o)
{
  TF f;
  LI x;
  x.hi = t->hi;
  x.lo = t->lo;
  RtlTimeToTimeFields(&x, &f);
  o->Year = f.Year;
  o->Month = f.Month;
  o->Day = f.Day;
  o->DayOfWeek = f.Weekday;
  o->Hour = f.Hour;
  o->Minute = f.Minute;
  o->Second = f.Second;
  o->Milliseconds = f.Milliseconds;
  return 1;
}
