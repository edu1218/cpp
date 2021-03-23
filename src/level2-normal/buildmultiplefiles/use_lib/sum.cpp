#include "sum.h"
double sum(double a, double b) {
  return a + b;
}
//可以做成靜態函式庫

/*可以做成動態函式庫
在沒有特定用例的情況下，強烈建議不要動態加載共享對象。動態加載需要一些知識和技能，陷阱也不少見
*/