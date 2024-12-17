#pragma once

#include <string>
#include <vector>

#include "core/task/include/task.hpp"

namespace zinoviev_a_bellman_ford_seq {

class BellmanFordTaskSequential : public ppc::core::Task {
 public:
  explicit BellmanFordTaskSequential(std::shared_ptr<ppc::core::TaskData> taskData_) : Task(std::move(taskData_)) {}
  bool pre_processing() override;
  bool validation() override;
  bool run() override;
  bool post_processing() override;

 private:
  int input_{}, res{};
};

}  // namespace zinoviev_a_bellman_ford_seq