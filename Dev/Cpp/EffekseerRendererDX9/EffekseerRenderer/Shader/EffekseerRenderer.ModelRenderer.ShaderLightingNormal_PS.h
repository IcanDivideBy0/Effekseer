#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 9.29.952.3111
//
//   fxc /Zpc /Tps_2_0 /EPS /Fh
//    Shader/EffekseerRenderer.ModelRenderer.ShaderLightingNormal_PS.h
//    Shader/model_renderer_lighting_normal_PS.fx
//
//
// Parameters:
//
//   float4 fLightAmbient;
//   float4 fLightDirection;
//   sampler2D g_normalSampler;
//
//
// Registers:
//
//   Name            Reg   Size
//   --------------- ----- ----
//   fLightDirection c0       1
//   fLightAmbient   c2       1
//   g_normalSampler s1       1
//

    ps_2_0
    def c1, -1, -0, -0.5, 0
    dcl t0.xy
    dcl_pp t1.xyz
    dcl_pp t2.xyz
    dcl_pp t3.xyz
    dcl v0
    dcl_2d s1
    texld r0, t0, s1
    cmp r1, -v0.w, c1.x, c1.y
    texkill r1
    add r0.xyz, r0, c1.z
    add_pp r0.xyz, r0, r0
    mul_pp r1.xyz, r0.y, t2
    mad_pp r1.xyz, r0.x, t3, r1
    mad_pp r0.xyz, r0.z, t1, r1
    nrm_pp r1.xyz, r0
    dp3 r0.x, c0, r1
    mul r0.yzw, r0.x, v0.wzyx
    cmp r0.xyz, r0.x, r0.wzyx, c1.w
    add r0.xyz, r0, c2
    mov r0.w, v0.w
    mov oC0, r0

// approximately 17 instruction slots used (1 texture, 16 arithmetic)
#endif

const BYTE g_ps20_PS[] =
{
      0,   2, 255, 255, 254, 255, 
     57,   0,  67,  84,  65,  66, 
     28,   0,   0,   0, 175,   0, 
      0,   0,   0,   2, 255, 255, 
      3,   0,   0,   0,  28,   0, 
      0,   0,  16,   1,   0,   0, 
    168,   0,   0,   0,  88,   0, 
      0,   0,   2,   0,   2,   0, 
      1,   0,  10,   0, 104,   0, 
      0,   0,   0,   0,   0,   0, 
    120,   0,   0,   0,   2,   0, 
      0,   0,   1,   0,   2,   0, 
    104,   0,   0,   0,   0,   0, 
      0,   0, 136,   0,   0,   0, 
      3,   0,   1,   0,   1,   0, 
      6,   0, 152,   0,   0,   0, 
      0,   0,   0,   0, 102,  76, 
    105, 103, 104, 116,  65, 109, 
     98, 105, 101, 110, 116,   0, 
    171, 171,   1,   0,   3,   0, 
      1,   0,   4,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
    102,  76, 105, 103, 104, 116, 
     68, 105, 114, 101,  99, 116, 
    105, 111, 110,   0, 103,  95, 
    110, 111, 114, 109,  97, 108, 
     83,  97, 109, 112, 108, 101, 
    114,   0,   4,   0,  12,   0, 
      1,   0,   1,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
    112, 115,  95,  50,  95,  48, 
      0,  77, 105,  99, 114, 111, 
    115, 111, 102, 116,  32,  40, 
     82,  41,  32,  72,  76,  83, 
     76,  32,  83, 104,  97, 100, 
    101, 114,  32,  67, 111, 109, 
    112, 105, 108, 101, 114,  32, 
     57,  46,  50,  57,  46,  57, 
     53,  50,  46,  51,  49,  49, 
     49,   0,  81,   0,   0,   5, 
      1,   0,  15, 160,   0,   0, 
    128, 191,   0,   0,   0, 128, 
      0,   0,   0, 191,   0,   0, 
      0,   0,  31,   0,   0,   2, 
      0,   0,   0, 128,   0,   0, 
      3, 176,  31,   0,   0,   2, 
      0,   0,   0, 128,   1,   0, 
     39, 176,  31,   0,   0,   2, 
      0,   0,   0, 128,   2,   0, 
     39, 176,  31,   0,   0,   2, 
      0,   0,   0, 128,   3,   0, 
     39, 176,  31,   0,   0,   2, 
      0,   0,   0, 128,   0,   0, 
     15, 144,  31,   0,   0,   2, 
      0,   0,   0, 144,   1,   8, 
     15, 160,  66,   0,   0,   3, 
      0,   0,  15, 128,   0,   0, 
    228, 176,   1,   8, 228, 160, 
     88,   0,   0,   4,   1,   0, 
     15, 128,   0,   0, 255, 145, 
      1,   0,   0, 160,   1,   0, 
     85, 160,  65,   0,   0,   1, 
      1,   0,  15, 128,   2,   0, 
      0,   3,   0,   0,   7, 128, 
      0,   0, 228, 128,   1,   0, 
    170, 160,   2,   0,   0,   3, 
      0,   0,  39, 128,   0,   0, 
    228, 128,   0,   0, 228, 128, 
      5,   0,   0,   3,   1,   0, 
     39, 128,   0,   0,  85, 128, 
      2,   0, 228, 176,   4,   0, 
      0,   4,   1,   0,  39, 128, 
      0,   0,   0, 128,   3,   0, 
    228, 176,   1,   0, 228, 128, 
      4,   0,   0,   4,   0,   0, 
     39, 128,   0,   0, 170, 128, 
      1,   0, 228, 176,   1,   0, 
    228, 128,  36,   0,   0,   2, 
      1,   0,  39, 128,   0,   0, 
    228, 128,   8,   0,   0,   3, 
      0,   0,   1, 128,   0,   0, 
    228, 160,   1,   0, 228, 128, 
      5,   0,   0,   3,   0,   0, 
     14, 128,   0,   0,   0, 128, 
      0,   0,  27, 144,  88,   0, 
      0,   4,   0,   0,   7, 128, 
      0,   0,   0, 128,   0,   0, 
     27, 128,   1,   0, 255, 160, 
      2,   0,   0,   3,   0,   0, 
      7, 128,   0,   0, 228, 128, 
      2,   0, 228, 160,   1,   0, 
      0,   2,   0,   0,   8, 128, 
      0,   0, 255, 144,   1,   0, 
      0,   2,   0,   8,  15, 128, 
      0,   0, 228, 128, 255, 255, 
      0,   0
};
