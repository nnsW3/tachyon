# FRI Benchmark

## CPU

```bash
Run on 13th Gen Intel(R) Core(TM) i9-13900K (32 X 5500 MHz CPU s)
CPU Caches:
  L1 Data 48 KiB (x16)
  L1 Instruction 32 KiB (x16)
  L2 Unified 2048 KiB (x16)
  L3 Unified 36864 KiB (x1)

Run on Apple M3 Pro (12 X 4050 MHz)
CPU Caches:
  L1 Data 64 KiB (x12)
  L1 Instruction 128 KiB (x12)
  L2 Unified 4096 KiB (x12)
```

```shell
bazel run -c opt --//:has_openmp --//:has_rtti --//:has_matplotlib //benchmark/fri:fri_benchmark -- -k 18 -k 19 -k 20 -k 21 -k 22 --batch_size 100 --input_num 4 --log_blowup 2 --vendor plonky3 --check_results
```

## On Intel i9-13900K

| Exponent | Tachyon     | Plonky3 |
| :------- | ----------- | ------- |
| 18       | **1.49223** | 1.70032 |
| 19       | **2.84027** | 3.45716 |
| 20       | **5.77075** | 6.91221 |
| 21       | **11.6113** | 13.8407 |
| 22       | **23.3140** | 27.9832 |

![image](/benchmark/fri/fri_benchmark_ubuntu_i9.png)

## On Mac M3 Pro

WARNING: On Mac M3, high degree tests are not feasible due to memory constraints.

| Exponent | Tachyon | Plonky3      |
| :------- | ------- | ------------ |
| 18       | 3.68509 | **1.39107**  |
| 19       | 7.37079 | **2.76483**  |
| 20       | 14.9081 | **5.62375**  |
| 21       | 30.3153 | **11.8295**  |
| 22       | 64.8022 | **25.4490**  |

![image](/benchmark/fri/fri_benchmark_mac_m3.png)
