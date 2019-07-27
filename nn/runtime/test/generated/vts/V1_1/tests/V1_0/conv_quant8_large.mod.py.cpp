// Generated from conv_quant8_large.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::conv_quant8_large {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::conv_quant8_large

namespace android::hardware::neuralnetworks::V1_1::generated_tests::conv_quant8_large {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, conv_quant8_large) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::conv_quant8_large::get_examples());
}

TEST_F(ValidationTest, conv_quant8_large) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::conv_quant8_large::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::conv_quant8_large

