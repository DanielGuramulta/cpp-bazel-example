#include "lib/hello-time.h"
#include "main/hello-greet.h"
#include <string>

#include <glog/logging.h>

int main(int argc, char **argv) {

  google::InitGoogleLogging(argv[0]);
  FLAGS_alsologtostderr = 1;

  std::string who = "world";
  if (argc > 1) {
    who = argv[1];
  }
  LOG(INFO) << get_greet(who);
  print_localtime();
  return 0;
}
