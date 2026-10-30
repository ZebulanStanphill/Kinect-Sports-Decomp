typedef struct {
  short Year;
  short Month;
  short Day;
  short Hour;
  short Minute;
  short Second;
  short Milliseconds;
  short Weekday;
} TIME_FIELDS;

extern void KeQuerySystemTime(__int64 *);
extern void RtlTimeToTimeFields(__int64 *, TIME_FIELDS *);

void fn_82A29A40(short *out)
{
  __int64 now;
  TIME_FIELDS tf;

  KeQuerySystemTime(&now);
  RtlTimeToTimeFields(&now, &tf);
  out[0] = tf.Year;
  out[1] = tf.Month;
  out[2] = tf.Weekday;
  out[3] = tf.Day;
  out[4] = tf.Hour;
  out[5] = tf.Minute;
  out[6] = tf.Second;
  out[7] = tf.Milliseconds;
}
