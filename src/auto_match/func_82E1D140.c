extern char lbl_8200ED9C[];
extern char lbl_8202F488[];
extern void fn_82E1E680(void *obj, const char *name);
extern void fn_82E1E4F0(void *obj, const char *name, char *type, int v);
extern void fn_82E1E590(void *obj, const char *name, char *type, int v);
extern void fn_82E1EDA0(void *obj);

typedef struct Surv_82E1D140 {
  int pad0;
  int pad4;
  int pad8;
  void *doc;
  int pad10;
  int pad14;
  unsigned char ready;
} Surv_82E1D140;

int fn_82E1D140(Surv_82E1D140 *self, int question, int questionId, int answer, int answerNumber, int context)
{
  if (self->doc == 0 || self->ready == 0) {
    return 0x80004005;
  }
  fn_82E1E680(self->doc, "SurveyAnswer");
  fn_82E1E4F0(self->doc, "Question", lbl_8200ED9C, question);
  fn_82E1E4F0(self->doc, "QuestionID", lbl_8200ED9C, questionId);
  fn_82E1E4F0(self->doc, "Answer", lbl_8200ED9C, answer);
  fn_82E1E590(self->doc, "AnswerNumber", lbl_8202F488, answerNumber);
  fn_82E1E4F0(self->doc, "Context", lbl_8200ED9C, context);
  fn_82E1EDA0(self->doc);
  return 0;
}
