// Copyright 2023 Nesterov Alexander
#pragma once

#include <memory>
#include <random>
#include <vector>

#include "core/task/include/task.hpp"

namespace zinoviev_a_bellman_ford_seq {

class BellmanFordSeqTaskSequential : public ppc::core::Task {
 public:
  explicit BellmanFordSeqTaskSequential(std::shared_ptr<ppc::core::TaskData> taskData_) : Task(std::move(taskData_)) {}
  bool pre_processing() override;
  bool validation() override;
  bool run() override;
  bool post_processing() override;

 private:
  std::vector<int> graph_;
  std::vector<int> dist_;
};

// ������� ��� ��������� ���������� �����
std::vector<int> generateRandomGraph(int num_vertices, int num_edges);

}  // namespace zinoviev_a_bellman_ford_seq