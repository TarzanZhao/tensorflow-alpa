#ifndef TENSORFLOW_COMPILER_XLA_SERVICE_GPU_AUTO_SHARDING_H_
#define TENSORFLOW_COMPILER_XLA_SERVICE_GPU_AUTO_SHARDING_H_

#include "tensorflow/compiler/xla/service/hlo_instruction.h"
#include "tensorflow/compiler/xla/service/hlo_pass_interface.h"

namespace xla {
namespace spmd {

class AutoSharding : public HloModulePass {
 public:
  AutoSharding() = default;
  ~AutoSharding() override = default;
  absl::string_view name() const override { return "auto_sharding"; }

  StatusOr<bool> Run(HloModule* module) override;
};

}  // namespace spmd
}  // namespace xla

#endif  // TENSORFLOW_COMPILER_XLA_SERVICE_GPU_AUTO_SHARDING_H_
