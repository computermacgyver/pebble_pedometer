#include <pebble_worker.h>

//Reference for Workers: http://developer.getpebble.com/guides/pebble-apps/app-structure/background-guide/

static void init() {
  // Initialize your worker here

}

static void deinit() {
  // Deinitialize your worker here

}

int main(void) {
  init();
  worker_event_loop();
  deinit();
}

