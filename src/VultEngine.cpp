
/* Code automatically generated by Vult https://github.com/modlfo/vult */
#include "VultEngine.h"

void Util__ctx_type_0_init(Util__ctx_type_0 &_output_){
   Util__ctx_type_0 _ctx;
   _ctx.pre = 0;
   _output_ = _ctx;
   return ;
}

void Util_edge_init(Util__ctx_type_0 &_output_){
   Util__ctx_type_0_init(_output_);
   return ;
}

uint8_t Util_edge(Util__ctx_type_0 &_ctx, uint8_t x){
   uint8_t ret;
   ret = (x && bool_not(_ctx.pre));
   _ctx.pre = x;
   return ret;
}

void Util__ctx_type_1_init(Util__ctx_type_1 &_output_){
   Util__ctx_type_1 _ctx;
   _ctx.pre_x = 0.f;
   _output_ = _ctx;
   return ;
}

void Util_change_init(Util__ctx_type_1 &_output_){
   Util__ctx_type_1_init(_output_);
   return ;
}

uint8_t Util_change(Util__ctx_type_1 &_ctx, float x){
   uint8_t v;
   v = (_ctx.pre_x != x);
   _ctx.pre_x = x;
   return v;
}

float Util_map(float x, float x0, float x1, float y0, float y1){
   return ((((x + (- x0)) * (y1 + (- y0))) / (x1 + (- x0))) + y0);
}

void Util__ctx_type_3_init(Util__ctx_type_3 &_output_){
   Util__ctx_type_3 _ctx;
   _ctx.y1 = 0.f;
   _ctx.x1 = 0.f;
   _output_ = _ctx;
   return ;
}

void Util_dcblock_init(Util__ctx_type_3 &_output_){
   Util__ctx_type_3_init(_output_);
   return ;
}

float Util_dcblock(Util__ctx_type_3 &_ctx, float x0){
   float y0;
   y0 = (x0 + (- _ctx.x1) + (_ctx.y1 * 0.995f));
   _ctx.x1 = x0;
   _ctx.y1 = y0;
   return y0;
}

void Util__ctx_type_4_init(Util__ctx_type_4 &_output_){
   Util__ctx_type_4 _ctx;
   _ctx.x = 0.f;
   _output_ = _ctx;
   return ;
}

void Util_smooth_init(Util__ctx_type_4 &_output_){
   Util__ctx_type_4_init(_output_);
   return ;
}

float Util_smooth(Util__ctx_type_4 &_ctx, float input){
   _ctx.x = (_ctx.x + ((input + (- _ctx.x)) * 0.005f));
   return _ctx.x;
}

float Util_cvToPitch(float cv){
   return ((cv * 120.f) + 24.f);
}

float Util_cvToperiodUnit(float cv){
   int index;
   index = int_clip(float_to_int((31.f * cv)),0,31);
   return (float_wrap_array(Util_cvToperiodUnit_c0)[index] + (cv * (float_wrap_array(Util_cvToperiodUnit_c1)[index] + (float_wrap_array(Util_cvToperiodUnit_c2)[index] * cv))));
}

float Stabile_calc_g(float cv, float fs){
   float pitch;
   pitch = Util_cvToPitch(cv);
   float f;
   f = (8.17579891564f * expf((0.0577622650467f * pitch)));
   float wd;
   wd = (6.28318530718f * f);
   float T;
   T = (1.f / fs);
   float wa;
   wa = ((2.f / T) * tanf((wd * T * 0.5f)));
   float g;
   g = (wa * T * 0.5f);
   return g;
}

float Stabile_calc_g_44100(float cv){
   int index;
   index = int_clip(float_to_int((141.111111111f * cv)),0,127);
   return (float_wrap_array(Stabile_calc_g_44100_c0)[index] + (cv * (float_wrap_array(Stabile_calc_g_44100_c1)[index] + (float_wrap_array(Stabile_calc_g_44100_c2)[index] * cv))));
}

float Stabile_calc_g_48000(float cv){
   int index;
   index = int_clip(float_to_int((141.111111111f * cv)),0,127);
   return (float_wrap_array(Stabile_calc_g_48000_c0)[index] + (cv * (float_wrap_array(Stabile_calc_g_48000_c1)[index] + (float_wrap_array(Stabile_calc_g_48000_c2)[index] * cv))));
}

float Stabile_calc_g_88200(float cv){
   int index;
   index = int_clip(float_to_int((141.111111111f * cv)),0,127);
   return (float_wrap_array(Stabile_calc_g_88200_c0)[index] + (cv * (float_wrap_array(Stabile_calc_g_88200_c1)[index] + (float_wrap_array(Stabile_calc_g_88200_c2)[index] * cv))));
}

float Stabile_calc_g_96000(float cv){
   int index;
   index = int_clip(float_to_int((141.111111111f * cv)),0,127);
   return (float_wrap_array(Stabile_calc_g_96000_c0)[index] + (cv * (float_wrap_array(Stabile_calc_g_96000_c1)[index] + (float_wrap_array(Stabile_calc_g_96000_c2)[index] * cv))));
}

float Stabile_calc_g_176400(float cv){
   int index;
   index = int_clip(float_to_int((141.111111111f * cv)),0,127);
   return (float_wrap_array(Stabile_calc_g_176400_c0)[index] + (cv * (float_wrap_array(Stabile_calc_g_176400_c1)[index] + (float_wrap_array(Stabile_calc_g_176400_c2)[index] * cv))));
}

float Stabile_calc_g_192000(float cv){
   int index;
   index = int_clip(float_to_int((141.111111111f * cv)),0,127);
   return (float_wrap_array(Stabile_calc_g_192000_c0)[index] + (cv * (float_wrap_array(Stabile_calc_g_192000_c1)[index] + (float_wrap_array(Stabile_calc_g_192000_c2)[index] * cv))));
}

void Stabile__ctx_type_8_init(Stabile__ctx_type_8 &_output_){
   Stabile__ctx_type_8 _ctx;
   _ctx.z2 = 0.f;
   _ctx.z1 = 0.f;
   _ctx.inv_den = 0.f;
   _ctx.g = 0.f;
   Util__ctx_type_1_init(_ctx._inst17);
   Util__ctx_type_1_init(_ctx._inst16);
   _ctx.R = 0.f;
   Stabile_default(_ctx);
   _output_ = _ctx;
   return ;
}

void Stabile_process_init(Stabile__ctx_type_8 &_output_){
   Stabile__ctx_type_8_init(_output_);
   return ;
}

void Stabile_process(Stabile__ctx_type_8 &_ctx, float x, float cv, float q, _tuple___real_real_real__ &_output_){
   q = (q + 0.5f);
   uint8_t _cond_41;
   _cond_41 = (Util_change(_ctx._inst16,cv) || Util_change(_ctx._inst17,q));
   if(_cond_41){
      float fs;
      fs = getSampleRate();
      uint8_t _cond_40;
      _cond_40 = (fs == 44100.f);
      if(_cond_40){
         _ctx.g = Stabile_calc_g_44100(cv);
      }
      else
      {
         uint8_t _cond_39;
         _cond_39 = (fs == 48000.f);
         if(_cond_39){
            _ctx.g = Stabile_calc_g_48000(cv);
         }
         else
         {
            uint8_t _cond_38;
            _cond_38 = (fs == 88200.f);
            if(_cond_38){
               _ctx.g = Stabile_calc_g_88200(cv);
            }
            else
            {
               uint8_t _cond_37;
               _cond_37 = (fs == 96000.f);
               if(_cond_37){
                  _ctx.g = Stabile_calc_g_96000(cv);
               }
               else
               {
                  uint8_t _cond_36;
                  _cond_36 = (fs == 176400.f);
                  if(_cond_36){
                     _ctx.g = Stabile_calc_g_176400(cv);
                  }
                  else
                  {
                     uint8_t _cond_35;
                     _cond_35 = (fs == 192000.f);
                     if(_cond_35){
                        _ctx.g = Stabile_calc_g_192000(cv);
                     }
                     else
                     {
                        _ctx.g = Stabile_calc_g(0.f,getSampleRate());
                     }
                  }
               }
            }
         }
      }
      _ctx.R = (1.f / (2.f * (q + 1e-18f)));
      _ctx.inv_den = (1.f / (1.f + (2.f * _ctx.R * _ctx.g) + (_ctx.g * _ctx.g)));
   }
   float high;
   high = ((x + (- (((2.f * _ctx.R) + _ctx.g) * _ctx.z1)) + (- _ctx.z2)) * _ctx.inv_den);
   float band;
   band = ((_ctx.g * high) + _ctx.z1);
   float low;
   low = ((_ctx.g * band) + _ctx.z2);
   _ctx.z1 = ((_ctx.g * high) + band);
   _ctx.z2 = ((_ctx.g * band) + low);
   _tuple___real_real_real__ _tuple_42;
   {
      _tuple_42.field_0 = low;
      _tuple_42.field_1 = band;
      _tuple_42.field_2 = high;
   }
   _output_ = _tuple_42;
   return ;
}

void Stabile_noteOn_init(Stabile__ctx_type_8 &_output_){
   Stabile__ctx_type_8_init(_output_);
   return ;
}

void Stabile_noteOn(Stabile__ctx_type_8 &_ctx, int note, int velocity, int channel){
}

void Stabile_noteOff_init(Stabile__ctx_type_8 &_output_){
   Stabile__ctx_type_8_init(_output_);
   return ;
}

void Stabile_noteOff(Stabile__ctx_type_8 &_ctx, int note, int channel){
}

void Stabile_controlChange_init(Stabile__ctx_type_8 &_output_){
   Stabile__ctx_type_8_init(_output_);
   return ;
}

void Stabile_controlChange(Stabile__ctx_type_8 &_ctx, int control, int value, int channel){
}

void Stabile_default_init(Stabile__ctx_type_8 &_output_){
   Stabile__ctx_type_8_init(_output_);
   return ;
}

void Stabile_default(Stabile__ctx_type_8 &_ctx){
   _ctx.g = Stabile_calc_g(0.f,getSampleRate());
   _ctx.R = 1.f;
   _ctx.inv_den = (1.f / (1.f + (_ctx.g * _ctx.g)));
}

float Saturate_soft_table(float x){
   int index;
   index = int_clip(float_to_int((5.f * (x + 24.f))),0,240);
   return (float_wrap_array(Saturate_soft_table_c0)[index] + (x * (float_wrap_array(Saturate_soft_table_c1)[index] + (float_wrap_array(Saturate_soft_table_c2)[index] * x))));
}

float Saturate_soft_process(float x){
   return Saturate_soft_table(x);
}

void Saturate_soft_noteOn(int note, int velocity, int channel){
}

void Saturate_soft_noteOff(int note, int channel){
}

void Saturate_soft_controlChange(int control, int value, int channel){
}

void Saturate_soft_default(){
}

void Rescomb__ctx_type_1_init(Rescomb__ctx_type_1 &_output_){
   Rescomb__ctx_type_1 _ctx;
   _ctx.write_pos = 0;
   float_init_array(3000,0.f,_ctx.buffer);
   _output_ = _ctx;
   return ;
}

void Rescomb_delay_init(Rescomb__ctx_type_1 &_output_){
   Rescomb__ctx_type_1_init(_output_);
   return ;
}

float Rescomb_delay(Rescomb__ctx_type_1 &_ctx, float x, float cv){
   _ctx.write_pos = ((_ctx.write_pos + 1) % 3000);
   float_set(_ctx.buffer,_ctx.write_pos,x);
   float r_size;
   r_size = 3000.f;
   float r_index;
   r_index = fmodf((int_to_float(_ctx.write_pos) + (- (Util_cvToperiodUnit(cv) * getSampleRate()))),r_size);
   uint8_t _cond_67;
   _cond_67 = (r_index < 0.f);
   if(_cond_67){ r_index = (r_size + r_index); }
   int t1;
   t1 = (float_to_int(floorf(r_index)) % 3000);
   int t2;
   t2 = ((t1 + 1) % 3000);
   float decimal;
   decimal = (r_index + (- int_to_float(t1)));
   float x1;
   x1 = float_get(_ctx.buffer,t1);
   float x2;
   x2 = float_get(_ctx.buffer,t2);
   float ret;
   ret = (((x2 + (- x1)) * decimal) + x1);
   return ret;
}

float Rescomb_toneCurve(float tone){
   int index;
   index = int_clip(float_to_int((26.25f * (tone + 1.2f))),0,63);
   return (float_wrap_array(Rescomb_toneCurve_c0)[index] + (tone * (float_wrap_array(Rescomb_toneCurve_c1)[index] + (float_wrap_array(Rescomb_toneCurve_c2)[index] * tone))));
}

void Rescomb__ctx_type_3_init(Rescomb__ctx_type_3 &_output_){
   Rescomb__ctx_type_3 _ctx;
   _ctx.stone = 0.f;
   _ctx.output = 0.f;
   Rescomb__ctx_type_1_init(_ctx._inst60);
   Util__ctx_type_3_init(_ctx._inst59);
   Util__ctx_type_1_init(_ctx._inst57);
   _output_ = _ctx;
   return ;
}

void Rescomb_do_init(Rescomb__ctx_type_3 &_output_){
   Rescomb__ctx_type_3_init(_output_);
   return ;
}

float Rescomb_do(Rescomb__ctx_type_3 &_ctx, float in, float cv, float tone, float res){
   uint8_t _cond_69;
   _cond_69 = Util_change(_ctx._inst57,tone);
   if(_cond_69){
      _ctx.stone = Rescomb_toneCurve(tone);
   }
   float feedback;
   feedback = Util_dcblock(_ctx._inst59,(_ctx.output * res));
   float saturated_input;
   saturated_input = Saturate_soft_process((in + feedback));
   _ctx.output = ((_ctx.stone * Rescomb_delay(_ctx._inst60,saturated_input,cv)) + in);
   return Saturate_soft_process(_ctx.output);
}

void Rescomb__ctx_type_4_init(Rescomb__ctx_type_4 &_output_){
   Rescomb__ctx_type_4 _ctx;
   Rescomb__ctx_type_3_init(_ctx._inst62);
   _output_ = _ctx;
   return ;
}

void Rescomb_process_init(Rescomb__ctx_type_4 &_output_){
   Rescomb__ctx_type_4_init(_output_);
   return ;
}

float Rescomb_process(Rescomb__ctx_type_4 &_ctx, float in, float cv, float tone, float res){
   return Rescomb_do(_ctx._inst62,in,cv,tone,res);
}

void Rescomb_noteOn_init(Rescomb__ctx_type_4 &_output_){
   Rescomb__ctx_type_4_init(_output_);
   return ;
}

void Rescomb_noteOn(Rescomb__ctx_type_4 &_ctx, int note, int velocity, int channel){
}

void Rescomb_noteOff_init(Rescomb__ctx_type_4 &_output_){
   Rescomb__ctx_type_4_init(_output_);
   return ;
}

void Rescomb_noteOff(Rescomb__ctx_type_4 &_ctx, int note, int channel){
}

void Rescomb_controlChange_init(Rescomb__ctx_type_4 &_output_){
   Rescomb__ctx_type_4_init(_output_);
   return ;
}

void Rescomb_controlChange(Rescomb__ctx_type_4 &_ctx, int control, int value, int channel){
}

void Rescomb_default_init(Rescomb__ctx_type_4 &_output_){
   Rescomb__ctx_type_4_init(_output_);
   return ;
}

void Rescomb_default(Rescomb__ctx_type_4 &_ctx){
}

void VultEngine__ctx_type_0_init(VultEngine__ctx_type_0 &_output_){
   VultEngine__ctx_type_0 _ctx;
   Rescomb__ctx_type_3_init(_ctx.inst);
   _output_ = _ctx;
   return ;
}

void VultEngine_rescomb_init(VultEngine__ctx_type_0 &_output_){
   VultEngine__ctx_type_0_init(_output_);
   return ;
}

float VultEngine_rescomb(VultEngine__ctx_type_0 &_ctx, float in, float cv_in, float tone_in, float res_in){
   float i;
   i = float_clip(in,-10.f,10.f);
   float cv;
   cv = float_clip(cv_in,0.f,1.f);
   float tone;
   tone = float_clip(tone_in,-1.05f,1.05f);
   float res;
   res = float_clip(res_in,-1.1f,1.1f);
   return Rescomb_do(_ctx.inst,i,cv,tone,res);
}

void VultEngine__ctx_type_1_init(VultEngine__ctx_type_1 &_output_){
   VultEngine__ctx_type_1 _ctx;
   Stabile__ctx_type_8_init(_ctx._inst72);
   _output_ = _ctx;
   return ;
}

void VultEngine_stabile_init(VultEngine__ctx_type_1 &_output_){
   VultEngine__ctx_type_1_init(_output_);
   return ;
}

void VultEngine_stabile(VultEngine__ctx_type_1 &_ctx, float in, float cut_in, float res_in, _tuple___real_real_real__ &_output_){
   float cut;
   cut = float_clip(cut_in,0.f,1.f);
   float res;
   res = float_clip(res_in,0.f,4.f);
   _tuple___real_real_real__ _call_73;
   Stabile_process(_ctx._inst72,in,cut,res,_call_73);
   _output_ = _call_73;
   return ;
}


