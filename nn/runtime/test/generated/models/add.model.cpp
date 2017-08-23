void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 8, 8, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type0);
  auto op0 = model->addOperand(&type0);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_ADD, {op1, op1}, {op0});
  model->addOperation(ANEURALNETWORKS_ADD, {op0, op1}, {op2});
  // Phase 3, inputs and outputs
  model->setInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}