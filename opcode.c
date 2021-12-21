#include "opcode.h"

const char*
wasmOpcodeDescription(
    WasmOpcode opcode
) {
    switch (opcode) {
        case wasmOpcodeUnreachable:
            return "unreachable";
        case wasmOpcodeNop:
            return "nop";
        case wasmOpcodeBlock:
            return "block";
        case wasmOpcodeLoop:
            return "loop";
        case wasmOpcodeIf:
            return "if";
        case wasmOpcodeElse:
            return "else";
        case wasmOpcodeEnd:
            return "end";
        case wasmOpcodeBr:
            return "br";
        case wasmOpcodeBrIf:
            return "br_if";
        case wasmOpcodeBrTable:
            return "br_table";
        case wasmOpcodeReturn:
            return "return";
        case wasmOpcodeCall:
            return "call";
        case wasmOpcodeCallIndirect:
            return "call_indirect";
        case wasmOpcodeDrop:
            return "drop";
        case wasmOpcodeSelect:
            return "select";
        case wasmOpcodeLocalGet:
            return "local.get";
        case wasmOpcodeLocalSet:
            return "local.set";
        case wasmOpcodeLocalTee:
            return "local.tee";
        case wasmOpcodeGlobalGet:
            return "global.get";
        case wasmOpcodeGlobalSet:
            return "global.set";
        case wasmOpcodeI32Load:
            return "i32.load";
        case wasmOpcodeI64Load:
            return "i64.load";
        case wasmOpcodeF32Load:
            return "f32.load";
        case wasmOpcodeF64Load:
            return "f64.load";
        case wasmOpcodeI32Load8S:
            return "i32.load8_s";
        case wasmOpcodeI32Load8U:
            return "i32.load8_u";
        case wasmOpcodeI32Load16S:
            return "i32.load16_s";
        case wasmOpcodeI32Load16U:
            return "i32.load16_u";
        case wasmOpcodeI64Load8S:
            return "i64.load8_s";
        case wasmOpcodeI64Load8U:
            return "i64.load8_u";
        case wasmOpcodeI64Load16S:
            return "i64.load16_s";
        case wasmOpcodeI64Load16U:
            return "i64.load16_u";
        case wasmOpcodeI64Load32S:
            return "i64.load32_s";
        case wasmOpcodeI64Load32U:
            return "i64.load32_u";
        case wasmOpcodeI32Store:
            return "i32.store";
        case wasmOpcodeI64Store:
            return "i64.store";
        case wasmOpcodeF32Store:
            return "f32.store";
        case wasmOpcodeF64Store:
            return "f64.store";
        case wasmOpcodeI32Store8:
            return "i32.store8";
        case wasmOpcodeI32Store16:
            return "i32.store16";
        case wasmOpcodeI64Store8:
            return "i64.store8";
        case wasmOpcodeI64Store16:
            return "i64.store16";
        case wasmOpcodeI64Store32:
            return "i64.store32";
        case wasmOpcodeMemorySize:
            return "memory.size";
        case wasmOpcodeMemoryGrow:
            return "memory.grow";
        case wasmOpcodeI32Const:
            return "i32.const";
        case wasmOpcodeI64Const:
            return "i64.const";
        case wasmOpcodeF32Const:
            return "f32.const";
        case wasmOpcodeF64Const:
            return "f64.const";
        case wasmOpcodeI32Eqz:
            return "i32.eqz";
        case wasmOpcodeI32Eq:
            return "i32.eq";
        case wasmOpcodeI32Ne:
            return "i32.ne";
        case wasmOpcodeI32LtS:
            return "i32.lt_s";
        case wasmOpcodeI32LtU:
            return "i32.lt_u";
        case wasmOpcodeI32GtS:
            return "i32.gt_s";
        case wasmOpcodeI32GtU:
            return "i32.gt_u";
        case wasmOpcodeI32LeS:
            return "i32.le_s";
        case wasmOpcodeI32LeU:
            return "i32.le_u";
        case wasmOpcodeI32GeS:
            return "i32.ge_s";
        case wasmOpcodeI32GeU:
            return "i32.ge_u";
        case wasmOpcodeI64Eqz:
            return "i64.eqz";
        case wasmOpcodeI64Eq:
            return "i64.eq";
        case wasmOpcodeI64Ne:
            return "i64.ne";
        case wasmOpcodeI64LtS:
            return "i64.lt_s";
        case wasmOpcodeI64LtU:
            return "i64.lt_u";
        case wasmOpcodeI64GtS:
            return "i64.gt_s";
        case wasmOpcodeI64GtU:
            return "i64.gt_u";
        case wasmOpcodeI64LeS:
            return "i64.le_s";
        case wasmOpcodeI64LeU:
            return "i64.le_u";
        case wasmOpcodeI64GeS:
            return "i64.ge_s";
        case wasmOpcodeI64GeU:
            return "i64.ge_u";
        case wasmOpcodeF32Eq:
            return "f32.eq";
        case wasmOpcodeF32Ne:
            return "f32.ne";
        case wasmOpcodeF32Lt:
            return "f32.lt";
        case wasmOpcodeF32Gt:
            return "f32.gt";
        case wasmOpcodeF32Le:
            return "f32.le";
        case wasmOpcodeF32Ge:
            return "f32.ge";
        case wasmOpcodeF64Eq:
            return "f64.eq";
        case wasmOpcodeF64Ne:
            return "f64.ne";
        case wasmOpcodeF64Lt:
            return "f64.lt";
        case wasmOpcodeF64Gt:
            return "f64.gt";
        case wasmOpcodeF64Le:
            return "f64.le";
        case wasmOpcodeF64Ge:
            return "f64.ge";
        case wasmOpcodeI32Clz:
            return "i32.clz";
        case wasmOpcodeI32Ctz:
            return "i32.ctz";
        case wasmOpcodeI32PopCnt:
            return "i32.popcnt";
        case wasmOpcodeI32Add:
            return "i32.add";
        case wasmOpcodeI32Sub:
            return "i32.sub";
        case wasmOpcodeI32Mul:
            return "i32.mul";
        case wasmOpcodeI32DivS:
            return "i32.div_s";
        case wasmOpcodeI32DivU:
            return "i32.div_u";
        case wasmOpcodeI32RemS:
            return "i32.rem_s";
        case wasmOpcodeI32RemU:
            return "i32.rem_u";
        case wasmOpcodeI32And:
            return "i32.and";
        case wasmOpcodeI32Or:
            return "i32.or";
        case wasmOpcodeI32Xor:
            return "i32.xor";
        case wasmOpcodeI32Shl:
            return "i32.shl";
        case wasmOpcodeI32ShrS:
            return "i32.shr_s";
        case wasmOpcodeI32ShrU:
            return "i32.shr_u";
        case wasmOpcodeI32Rotl:
            return "i32.rot_l";
        case wasmOpcodeI32Rotr:
            return "i32.rot_r";
        case wasmOpcodeI64Clz:
            return "i64.clz";
        case wasmOpcodeI64Ctz:
            return "i64.ctz";
        case wasmOpcodeI64PopCnt:
            return "i64.popcnt";
        case wasmOpcodeI64Add:
            return "i64.add";
        case wasmOpcodeI64Sub:
            return "i64.sub";
        case wasmOpcodeI64Mul:
            return "i64.mul";
        case wasmOpcodeI64DivS:
            return "i64.div_s";
        case wasmOpcodeI64DivU:
            return "i64.div_u";
        case wasmOpcodeI64RemS:
            return "i64.rem_s";
        case wasmOpcodeI64RemU:
            return "i64.rem_u";
        case wasmOpcodeI64And:
            return "i64.and";
        case wasmOpcodeI64Or:
            return "i64.or";
        case wasmOpcodeI64Xor:
            return "i64.xor";
        case wasmOpcodeI64Shl:
            return "i64.shl";
        case wasmOpcodeI64ShrS:
            return "i64.shr_s";
        case wasmOpcodeI64ShrU:
            return "i64.shr_u";
        case wasmOpcodeI64Rotl:
            return "i64.rot_l";
        case wasmOpcodeI64Rotr:
            return "i64.rot_r";
        case wasmOpcodeF32Abs:
            return "f32.abs";
        case wasmOpcodeF32Neg:
            return "f32.neg";
        case wasmOpcodeF32Ceil:
            return "f32.ceil";
        case wasmOpcodeF32Floor:
            return "f32.floor";
        case wasmOpcodeF32Trunc:
            return "f32.trunc";
        case wasmOpcodeF32Nearest:
            return "f32.nearest";
        case wasmOpcodeF32Sqrt:
            return "f32.sqrt";
        case wasmOpcodeF32Add:
            return "f32.add";
        case wasmOpcodeF32Sub:
            return "f32.sub";
        case wasmOpcodeF32Mul:
            return "f32.mul";
        case wasmOpcodeF32Div:
            return "f32.div";
        case wasmOpcodeF32Min:
            return "f32.min";
        case wasmOpcodeF32Max:
            return "f32.max";
        case wasmOpcodeF32CopySign:
            return "f32.copysign";
        case wasmOpcodeF64Abs:
            return "f64.abs";
        case wasmOpcodeF64Neg:
            return "f64.neg";
        case wasmOpcodeF64Ceil:
            return "f64.ceil";
        case wasmOpcodeF64Floor:
            return "f64.floor";
        case wasmOpcodeF64Trunc:
            return "f64.trunc";
        case wasmOpcodeF64Nearest:
            return "f64.nearest";
        case wasmOpcodeF64Sqrt:
            return "f64.sqrt";
        case wasmOpcodeF64Add:
            return "f64.add";
        case wasmOpcodeF64Sub:
            return "f64.sub";
        case wasmOpcodeF64Mul:
            return "f64.mul";
        case wasmOpcodeF64Div:
            return "f64.div";
        case wasmOpcodeF64Min:
            return "f64.min";
        case wasmOpcodeF64Max:
            return "f64.max";
        case wasmOpcodeF64CopySign:
            return "f64.copysign";
        case wasmOpcodeI32WrapI64:
            return "i32.wrap_i64";
        case wasmOpcodeI32TruncF32S:
            return "i32.trunc_f32_s";
        case wasmOpcodeI32TruncF32U:
            return "i32.trunc_f32_u";
        case wasmOpcodeI32TruncF64S:
            return "i32.trunc_f64_s";
        case wasmOpcodeI32TruncF64U:
            return "i32.trunc_f64_u";
        case wasmOpcodeI64ExtendI32S:
            return "i64.extend_i32_s";
        case wasmOpcodeI64ExtendI32U:
            return "i64.extend_i32_u";
        case wasmOpcodeI64TruncF32S:
            return "i64.trunc_f32_s";
        case wasmOpcodeI64TruncF32U:
            return "i64.trunc_f32_u";
        case wasmOpcodeI64TruncF64S:
            return "i64.trunc_f64_s";
        case wasmOpcodeI64TruncF64U:
            return "i64.trunc_f64_u";
        case wasmOpcodeF32ConvertI32S:
            return "f32.convert_i32_s";
        case wasmOpcodeF32ConvertI32U:
            return "f32.convert_i32_u";
        case wasmOpcodeF32ConvertI64S:
            return "f32.convert_i64_s";
        case wasmOpcodeF32ConvertI64U:
            return "f32.convert_i64_u";
        case wasmOpcodeF32DemoteF64:
            return "f32.demote_f64";
        case wasmOpcodeF64ConvertI32S:
            return "f64.convert_i32_s";
        case wasmOpcodeF64ConvertI32U:
            return "f64.convert_i32_u";
        case wasmOpcodeF64ConvertI64S:
            return "f64.convert_i64_s";
        case wasmOpcodeF64ConvertI64U:
            return "f64.convert_i64_u";
        case wasmOpcodeF64PromoteF32:
            return "f64.promote_f32";
        case wasmOpcodeI32ReinterpretF32:
            return "i32.reinterpret_f32";
        case wasmOpcodeI64ReinterpretF64:
            return "i64.reinterpret_f64";
        case wasmOpcodeF32ReinterpretI32:
            return "f32.reinterpret_i32";
        case wasmOpcodeF64ReinterpretI64:
            return "f64.reinterpret_i64";
        default:
            return "unknown";
    }
}

WasmValueType
wasmOpcodeResultType(
    const WasmOpcode opcode
) {
    switch (opcode) {
        case wasmOpcodeI32Const:
            return wasmValueTypeI32;
        case wasmOpcodeI64Const:
            return wasmValueTypeI64;
        case wasmOpcodeF32Const:
            return wasmValueTypeF32;
        case wasmOpcodeF64Const:
            return wasmValueTypeF64;

        case wasmOpcodeI32Load:
            return wasmValueTypeI32;
        case wasmOpcodeI64Load:
            return wasmValueTypeI64;
        case wasmOpcodeF32Load:
            return wasmValueTypeF32;
        case wasmOpcodeF64Load:
            return wasmValueTypeF64;

        case wasmOpcodeI32Load8S:
        case wasmOpcodeI32Load8U:
        case wasmOpcodeI32Load16S:
        case wasmOpcodeI32Load16U:
            return wasmValueTypeI32;

        case wasmOpcodeI64Load8S:
        case wasmOpcodeI64Load8U:
        case wasmOpcodeI64Load16S:
        case wasmOpcodeI64Load16U:
        case wasmOpcodeI64Load32S:
        case wasmOpcodeI64Load32U:
            return wasmValueTypeI64;

        case wasmOpcodeMemorySize:
        case wasmOpcodeMemoryGrow:
            return wasmValueTypeI32;

        case wasmOpcodeI32Eqz:
        case wasmOpcodeI32Eq:
        case wasmOpcodeI32Ne:
        case wasmOpcodeI32LtS:
        case wasmOpcodeI32LtU:
        case wasmOpcodeI32GtS:
        case wasmOpcodeI32GtU:
        case wasmOpcodeI32LeS:
        case wasmOpcodeI32LeU:
        case wasmOpcodeI32GeS:
        case wasmOpcodeI32GeU:
        case wasmOpcodeI64Eqz:
        case wasmOpcodeI64Eq:
        case wasmOpcodeI64Ne:
        case wasmOpcodeI64LtS:
        case wasmOpcodeI64LtU:
        case wasmOpcodeI64GtS:
        case wasmOpcodeI64GtU:
        case wasmOpcodeI64LeS:
        case wasmOpcodeI64LeU:
        case wasmOpcodeI64GeS:
        case wasmOpcodeI64GeU:
        case wasmOpcodeF32Eq:
        case wasmOpcodeF32Ne:
        case wasmOpcodeF32Lt:
        case wasmOpcodeF32Gt:
        case wasmOpcodeF32Le:
        case wasmOpcodeF32Ge:
        case wasmOpcodeF64Eq:
        case wasmOpcodeF64Ne:
        case wasmOpcodeF64Lt:
        case wasmOpcodeF64Gt:
        case wasmOpcodeF64Le:
        case wasmOpcodeF64Ge:
        case wasmOpcodeI32Clz:
        case wasmOpcodeI32Ctz:
        case wasmOpcodeI32PopCnt:
        case wasmOpcodeI32Add:
        case wasmOpcodeI32Sub:
        case wasmOpcodeI32Mul:
        case wasmOpcodeI32DivS:
        case wasmOpcodeI32DivU:
        case wasmOpcodeI32RemS:
        case wasmOpcodeI32RemU:
        case wasmOpcodeI32And:
        case wasmOpcodeI32Or:
        case wasmOpcodeI32Xor:
        case wasmOpcodeI32Shl:
        case wasmOpcodeI32ShrS:
        case wasmOpcodeI32ShrU:
        case wasmOpcodeI32Rotl:
        case wasmOpcodeI32Rotr:
            return wasmValueTypeI32;

        case wasmOpcodeI64Clz:
        case wasmOpcodeI64Ctz:
        case wasmOpcodeI64PopCnt:
        case wasmOpcodeI64Add:
        case wasmOpcodeI64Sub:
        case wasmOpcodeI64Mul:
        case wasmOpcodeI64DivS:
        case wasmOpcodeI64DivU:
        case wasmOpcodeI64RemS:
        case wasmOpcodeI64RemU:
        case wasmOpcodeI64And:
        case wasmOpcodeI64Or:
        case wasmOpcodeI64Xor:
        case wasmOpcodeI64Shl:
        case wasmOpcodeI64ShrS:
        case wasmOpcodeI64ShrU:
        case wasmOpcodeI64Rotl:
        case wasmOpcodeI64Rotr:
            return wasmValueTypeI64;

        case wasmOpcodeF32Abs:
        case wasmOpcodeF32Neg:
        case wasmOpcodeF32Ceil:
        case wasmOpcodeF32Floor:
        case wasmOpcodeF32Trunc:
        case wasmOpcodeF32Nearest:
        case wasmOpcodeF32Sqrt:
        case wasmOpcodeF32Add:
        case wasmOpcodeF32Sub:
        case wasmOpcodeF32Mul:
        case wasmOpcodeF32Div:
        case wasmOpcodeF32Min:
        case wasmOpcodeF32Max:
        case wasmOpcodeF32CopySign:
            return wasmValueTypeF32;

        case wasmOpcodeF64Abs:
        case wasmOpcodeF64Neg:
        case wasmOpcodeF64Ceil:
        case wasmOpcodeF64Floor:
        case wasmOpcodeF64Trunc:
        case wasmOpcodeF64Nearest:
        case wasmOpcodeF64Sqrt:
        case wasmOpcodeF64Add:
        case wasmOpcodeF64Sub:
        case wasmOpcodeF64Mul:
        case wasmOpcodeF64Div:
        case wasmOpcodeF64Min:
        case wasmOpcodeF64Max:
        case wasmOpcodeF64CopySign:
            return wasmValueTypeF64;

        case wasmOpcodeI32WrapI64:
        case wasmOpcodeI32TruncF32S:
        case wasmOpcodeI32TruncF32U:
        case wasmOpcodeI32TruncF64S:
        case wasmOpcodeI32TruncF64U:
            return wasmValueTypeI32;

        case wasmOpcodeI64ExtendI32S:
        case wasmOpcodeI64ExtendI32U:
        case wasmOpcodeI64TruncF32S:
        case wasmOpcodeI64TruncF32U:
        case wasmOpcodeI64TruncF64S:
        case wasmOpcodeI64TruncF64U:
            return wasmValueTypeI64;

        case wasmOpcodeF32ConvertI32S:
        case wasmOpcodeF32ConvertI32U:
        case wasmOpcodeF32ConvertI64S:
        case wasmOpcodeF32ConvertI64U:
        case wasmOpcodeF32DemoteF64:
            return wasmValueTypeF32;

        case wasmOpcodeF64ConvertI32S:
        case wasmOpcodeF64ConvertI32U:
        case wasmOpcodeF64ConvertI64S:
        case wasmOpcodeF64ConvertI64U:
        case wasmOpcodeF64PromoteF32:
            return wasmValueTypeF64;

        case wasmOpcodeI32ReinterpretF32:
            return wasmValueTypeI32;
        case wasmOpcodeI64ReinterpretF64:
            return wasmValueTypeI64;
        case wasmOpcodeF32ReinterpretI32:
            return wasmValueTypeF32;
        case wasmOpcodeF64ReinterpretI64:
            return wasmValueTypeF64;

        default:
            return 0;
    }
}

WasmValueType
wasmOpcodeParameter1Type(
    const WasmOpcode opcode
) {
    switch (opcode) {
        case wasmOpcodeBrIf:
        case wasmOpcodeBrTable:
        case wasmOpcodeI32Load:
        case wasmOpcodeI64Load:
        case wasmOpcodeF32Load:
        case wasmOpcodeF64Load:
        case wasmOpcodeI32Load8S:
        case wasmOpcodeI32Load8U:
        case wasmOpcodeI32Load16S:
        case wasmOpcodeI32Load16U:
        case wasmOpcodeI64Load8S:
        case wasmOpcodeI64Load8U:
        case wasmOpcodeI64Load16S:
        case wasmOpcodeI64Load16U:
        case wasmOpcodeI64Load32S:
        case wasmOpcodeI64Load32U:
        case wasmOpcodeI32Store:
        case wasmOpcodeI64Store:
        case wasmOpcodeF32Store:
        case wasmOpcodeF64Store:
        case wasmOpcodeI32Store8:
        case wasmOpcodeI32Store16:
        case wasmOpcodeI64Store8:
        case wasmOpcodeI64Store16:
        case wasmOpcodeI64Store32:
        case wasmOpcodeMemoryGrow:
        case wasmOpcodeI32Eqz:
        case wasmOpcodeI32Eq:
        case wasmOpcodeI32Ne:
        case wasmOpcodeI32LtS:
        case wasmOpcodeI32LtU:
        case wasmOpcodeI32GtS:
        case wasmOpcodeI32GtU:
        case wasmOpcodeI32LeS:
        case wasmOpcodeI32LeU:
        case wasmOpcodeI32GeS:
        case wasmOpcodeI32GeU:
            return wasmValueTypeI32;

        case wasmOpcodeI64Eqz:
        case wasmOpcodeI64Eq:
        case wasmOpcodeI64Ne:
        case wasmOpcodeI64LtS:
        case wasmOpcodeI64LtU:
        case wasmOpcodeI64GtS:
        case wasmOpcodeI64GtU:
        case wasmOpcodeI64LeS:
        case wasmOpcodeI64LeU:
        case wasmOpcodeI64GeS:
        case wasmOpcodeI64GeU:
            return wasmValueTypeI64;

        case wasmOpcodeF32Eq:
        case wasmOpcodeF32Ne:
        case wasmOpcodeF32Lt:
        case wasmOpcodeF32Gt:
        case wasmOpcodeF32Le:
        case wasmOpcodeF32Ge:
            return wasmValueTypeF32;

        case wasmOpcodeF64Eq:
        case wasmOpcodeF64Ne:
        case wasmOpcodeF64Lt:
        case wasmOpcodeF64Gt:
        case wasmOpcodeF64Le:
        case wasmOpcodeF64Ge:
            return wasmValueTypeF64;

        case wasmOpcodeI32Clz:
        case wasmOpcodeI32Ctz:
        case wasmOpcodeI32PopCnt:
        case wasmOpcodeI32Add:
        case wasmOpcodeI32Sub:
        case wasmOpcodeI32Mul:
        case wasmOpcodeI32DivS:
        case wasmOpcodeI32DivU:
        case wasmOpcodeI32RemS:
        case wasmOpcodeI32RemU:
        case wasmOpcodeI32And:
        case wasmOpcodeI32Or:
        case wasmOpcodeI32Xor:
        case wasmOpcodeI32Shl:
        case wasmOpcodeI32ShrS:
        case wasmOpcodeI32ShrU:
        case wasmOpcodeI32Rotl:
        case wasmOpcodeI32Rotr:
            return wasmValueTypeI32;

        case wasmOpcodeI64Clz:
        case wasmOpcodeI64Ctz:
        case wasmOpcodeI64PopCnt:
        case wasmOpcodeI64Add:
        case wasmOpcodeI64Sub:
        case wasmOpcodeI64Mul:
        case wasmOpcodeI64DivS:
        case wasmOpcodeI64DivU:
        case wasmOpcodeI64RemS:
        case wasmOpcodeI64RemU:
        case wasmOpcodeI64And:
        case wasmOpcodeI64Or:
        case wasmOpcodeI64Xor:
        case wasmOpcodeI64Shl:
        case wasmOpcodeI64ShrS:
        case wasmOpcodeI64ShrU:
        case wasmOpcodeI64Rotl:
        case wasmOpcodeI64Rotr:
            return wasmValueTypeI64;

        case wasmOpcodeF32Abs:
        case wasmOpcodeF32Neg:
        case wasmOpcodeF32Ceil:
        case wasmOpcodeF32Floor:
        case wasmOpcodeF32Trunc:
        case wasmOpcodeF32Nearest:
        case wasmOpcodeF32Sqrt:
        case wasmOpcodeF32Add:
        case wasmOpcodeF32Sub:
        case wasmOpcodeF32Mul:
        case wasmOpcodeF32Div:
        case wasmOpcodeF32Min:
        case wasmOpcodeF32Max:
        case wasmOpcodeF32CopySign:
            return wasmValueTypeF32;

        case wasmOpcodeF64Abs:
        case wasmOpcodeF64Neg:
        case wasmOpcodeF64Ceil:
        case wasmOpcodeF64Floor:
        case wasmOpcodeF64Trunc:
        case wasmOpcodeF64Nearest:
        case wasmOpcodeF64Sqrt:
        case wasmOpcodeF64Add:
        case wasmOpcodeF64Sub:
        case wasmOpcodeF64Mul:
        case wasmOpcodeF64Div:
        case wasmOpcodeF64Min:
        case wasmOpcodeF64Max:
        case wasmOpcodeF64CopySign:
            return wasmValueTypeF64;

        case wasmOpcodeI32WrapI64:
            return wasmValueTypeI64;

        case wasmOpcodeI32TruncF32S:
        case wasmOpcodeI32TruncF32U:
            return wasmValueTypeF32;

        case wasmOpcodeI32TruncF64S:
        case wasmOpcodeI32TruncF64U:
            return wasmValueTypeF64;

        case wasmOpcodeI64ExtendI32S:
        case wasmOpcodeI64ExtendI32U:
            return wasmValueTypeI32;

        case wasmOpcodeI64TruncF32S:
        case wasmOpcodeI64TruncF32U:
            return wasmValueTypeF32;
        case wasmOpcodeI64TruncF64S:
        case wasmOpcodeI64TruncF64U:
            return wasmValueTypeF64;

        case wasmOpcodeF32ConvertI32S:
        case wasmOpcodeF32ConvertI32U:
            return wasmValueTypeI32;
        case wasmOpcodeF32ConvertI64S:
        case wasmOpcodeF32ConvertI64U:
            return wasmValueTypeI64;

        case wasmOpcodeF32DemoteF64:
            return wasmValueTypeF64;

        case wasmOpcodeF64ConvertI32S:
        case wasmOpcodeF64ConvertI32U:
            return wasmValueTypeI32;
        case wasmOpcodeF64ConvertI64S:
        case wasmOpcodeF64ConvertI64U:
            return wasmValueTypeI64;

        case wasmOpcodeF64PromoteF32:
            return wasmValueTypeF32;

        case wasmOpcodeI32ReinterpretF32:
            return wasmValueTypeF32;
        case wasmOpcodeI64ReinterpretF64:
            return wasmValueTypeF64;
        case wasmOpcodeF32ReinterpretI32:
            return wasmValueTypeI32;
        case wasmOpcodeF64ReinterpretI64:
            return wasmValueTypeI64;

        default:
            return 0;
    }
}
