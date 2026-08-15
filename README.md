# inline_switch.h

Util code, that adds QoL change.

# Usage

```C
#include <stdio.h>
#include <inline_switch.h>

enum Values {
  VALUES_A,
  VALUES_B,
  VALUES_C,
};

int main() {
  enum values vals = VALUES_A;

  printf("value: %s",
    #define _INLINE_SWITCH_KEY vals
    INLINE_SWITCH(
      CASE(VALUES_A, "a")
      CASE(VALUES_B, "b")
      CASE(VALUES_C, "c")
    )
    #undef _INLINE_SWITCH_KEY
  );
  return 0;
}

```
