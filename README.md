# Introduction
This repository is an example of our code in Tensorflow.
```

Our code is based on [OpenAI Baselines](https://github.com/openai/baselines).

# Training
The following command runs `A2C+SI` in  Montezuma's Revenge:
```
cd SIA2C
CUDA_VISIBLE_DEVICES=0 python3 run_atari_sia2c.py --env MontezumaRevengeNoFrameskip-v4
```



