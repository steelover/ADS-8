// Copyright 2022 NNTU-CS
#ifndef INCLUDE_TRAIN_H_
#define INCLUDE_TRAIN_H_

class Train {
 private:
  bool arr[1000] = {false};
  int first = 0, last = 0, now = 0, countOp = 0;
  bool start = false, check = false;

 public:
  Train();
  void addCage(bool light);  // добавить вагон с начальным состоянием лампочки
  int getLength();           // вычислить длину поезда
  int getOpCount();          // вернуть число переходов (из вагона в вагон)
};
#endif  // INCLUDE_TRAIN_H_
