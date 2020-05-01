#
# Copyright (C) 2020 The Android Open Source Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
# Model operands
op0 = Input("op0", ["TENSOR_FLOAT32", [9, 1, 1]])
op1 = Output("op1", ["TENSOR_FLOAT32", [9, 1, 1]])
op5 = Parameter("op5", ["TENSOR_FLOAT32", [1, 1, 1]], [0])
op7 = Parameter("op7", ["TENSOR_INT32", [0]], value=None)  # omitted
op8 = Internal("op8", ["TENSOR_FLOAT32", []])

# Model operations
model = Model()
model.Operation("FLOOR", op0).To(op1)
model.Operation("SQUEEZE", op5, op7).To(op8)

# Example
Example({
    op0: [0, 0, 0, 0, 0, 0, 0, 0, 0],
    op1: [0, 0, 0, 0, 0, 0, 0, 0, 0],
}, model=model).DisableLifeTimeVariation()