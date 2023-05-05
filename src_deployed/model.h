#pragma once
//#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class RandomForest {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        uint8_t votes[4] = { 0 };
                        // tree #1
                        if (x[57] <= -1257.0) {
                            if (x[28] <= 13604.0) {
                                if (x[59] <= -6305.0) {
                                    if (x[16] <= -12196.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[16] <= -4882.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[24] <= 14906.0) {
                                            if (x[45] <= -1568.0) {
                                                if (x[34] <= 576.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[44] <= -4708.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[22] <= 18250.0) {
                                                    if (x[17] <= 5062.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 3744.0) {
                                                if (x[23] <= 13034.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                if (x[30] <= 2551.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[51] <= -7329.0) {
                                    if (x[22] <= 13246.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[17] <= -1496.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= -102.0) {
                                        if (x[12] <= -1344.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 1010.0) {
                                                if (x[33] <= -2507.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[13] <= -1232.0) {
                                            if (x[40] <= -4298.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[40] <= 4074.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[33] <= 3045.5) {
                                                if (x[56] <= -1679.0) {
                                                    if (x[15] <= 6510.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[16] <= 3384.0) {
                                                        if (x[59] <= -1534.0) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[39] <= -446.5) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                if (x[22] <= 16444.0) {
                                                                    votes[0] += 1;
                                                                }

                                                                else {
                                                                    votes[2] += 1;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[5] <= 5102.0) {
                                                    if (x[4] <= -134.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[51] <= 1133.5) {
                                if (x[57] <= 725.0) {
                                    if (x[18] <= 3058.0) {
                                        if (x[37] <= 1217.0) {
                                            if (x[31] <= 2389.5) {
                                                if (x[54] <= -3208.0) {
                                                    if (x[57] <= -841.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[36] <= -1170.5) {
                                                        if (x[26] <= 15402.0) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[53] <= 2935.5) {
                                                            if (x[41] <= 4152.5) {
                                                                if (x[3] <= -1376.0) {
                                                                    votes[2] += 1;
                                                                }

                                                                else {
                                                                    if (x[38] <= -1624.5) {
                                                                        votes[2] += 1;
                                                                    }

                                                                    else {
                                                                        if (x[30] <= 2741.0) {
                                                                            if (x[42] <= -2550.0) {
                                                                                votes[3] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[59] <= -1555.0) {
                                                                                    if (x[21] <= 14510.0) {
                                                                                        votes[2] += 1;
                                                                                    }

                                                                                    else {
                                                                                        if (x[43] <= -314.0) {
                                                                                            votes[0] += 1;
                                                                                        }

                                                                                        else {
                                                                                            votes[2] += 1;
                                                                                        }
                                                                                    }
                                                                                }

                                                                                else {
                                                                                    if (x[28] <= 13810.0) {
                                                                                        if (x[37] <= -109.5) {
                                                                                            votes[2] += 1;
                                                                                        }

                                                                                        else {
                                                                                            votes[0] += 1;
                                                                                        }
                                                                                    }

                                                                                    else {
                                                                                        if (x[39] <= -522.0) {
                                                                                            if (x[18] <= 1230.0) {
                                                                                                if (x[11] <= 1252.0) {
                                                                                                    votes[2] += 1;
                                                                                                }

                                                                                                else {
                                                                                                    votes[0] += 1;
                                                                                                }
                                                                                            }

                                                                                            else {
                                                                                                votes[0] += 1;
                                                                                            }
                                                                                        }

                                                                                        else {
                                                                                            if (x[52] <= -2015.0) {
                                                                                                if (x[21] <= 16808.0) {
                                                                                                    votes[0] += 1;
                                                                                                }

                                                                                                else {
                                                                                                    votes[2] += 1;
                                                                                                }
                                                                                            }

                                                                                            else {
                                                                                                if (x[59] <= -612.0) {
                                                                                                    if (x[39] <= 531.0) {
                                                                                                        votes[0] += 1;
                                                                                                    }

                                                                                                    else {
                                                                                                        if (x[10] <= 1276.0) {
                                                                                                            votes[0] += 1;
                                                                                                        }

                                                                                                        else {
                                                                                                            votes[3] += 1;
                                                                                                        }
                                                                                                    }
                                                                                                }

                                                                                                else {
                                                                                                    votes[0] += 1;
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[2] += 1;
                                                                        }
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[50] <= -3173.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[6] <= 468.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[14] <= -84.0) {
                                                    if (x[15] <= -632.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[39] <= -2829.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[57] <= 385.5) {
                                                if (x[14] <= 5264.0) {
                                                    if (x[43] <= -578.5) {
                                                        if (x[10] <= -5772.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[18] <= 3954.0) {
                                                                if (x[50] <= 3296.0) {
                                                                    votes[0] += 1;
                                                                }

                                                                else {
                                                                    votes[3] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[36] <= 3286.5) {
                                        if (x[26] <= 14212.0) {
                                            if (x[30] <= 3134.5) {
                                                if (x[31] <= 166.5) {
                                                    if (x[31] <= -1760.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[57] <= 876.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[6] <= 1154.0) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[25] <= 14740.0) {
                                                if (x[36] <= -1407.0) {
                                                    if (x[8] <= 74.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[51] <= -341.0) {
                                                        if (x[6] <= -352.0) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[30] <= 406.0) {
                                                            if (x[38] <= -643.0) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[48] <= 1182.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[16] <= 3432.0) {
                                                    if (x[21] <= 18030.0) {
                                                        if (x[58] <= 1028.5) {
                                                            if (x[1] <= 1906.0) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[35] <= -3059.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[32] <= 866.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[45] <= -299.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[24] <= 13318.0) {
                                    if (x[53] <= 2646.0) {
                                        if (x[18] <= 1244.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[14] <= -4822.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[6] <= 1888.0) {
                                        if (x[57] <= 3597.0) {
                                            if (x[47] <= -1489.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[53] <= 3486.0) {
                                                    if (x[50] <= 4415.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[17] <= -778.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[58] <= 143.0) {
                                            if (x[53] <= 1882.5) {
                                                if (x[53] <= -64.5) {
                                                    if (x[52] <= 953.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[16] <= 3668.0) {
                                                    if (x[33] <= -2932.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[24] <= 14020.0) {
                                                if (x[3] <= 3464.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #2
                        if (x[53] <= -1282.5) {
                            if (x[23] <= 15986.0) {
                                if (x[39] <= -671.5) {
                                    if (x[10] <= 1714.0) {
                                        if (x[32] <= 5766.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[18] <= -2194.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[13] <= -858.0) {
                                        if (x[43] <= -855.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[20] <= 16102.0) {
                                                if (x[2] <= -1760.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[8] <= -1424.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[17] <= -1312.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[46] <= 452.5) {
                                                if (x[26] <= 15558.0) {
                                                    if (x[31] <= 2491.0) {
                                                        if (x[45] <= -1489.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            if (x[28] <= 16656.0) {
                                                                if (x[22] <= 16874.0) {
                                                                    votes[0] += 1;
                                                                }

                                                                else {
                                                                    votes[2] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[4] <= 3400.0) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[38] <= -130.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[57] <= -5394.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[33] <= 732.0) {
                                                        if (x[54] <= -1611.0) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[16] <= 2124.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 3060.0) {
                                    if (x[31] <= -4506.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[38] <= 2896.0) {
                                            if (x[50] <= -5639.5) {
                                                if (x[24] <= 14004.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[39] <= 1040.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[8] <= -682.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[7] <= 6668.0) {
                                        if (x[40] <= -13016.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[30] <= 1801.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[38] <= 907.5) {
                                if (x[54] <= 635.0) {
                                    if (x[28] <= 16390.0) {
                                        if (x[13] <= 4608.0) {
                                            if (x[32] <= 2508.0) {
                                                if (x[57] <= -1446.0) {
                                                    if (x[50] <= -217.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[38] <= -710.5) {
                                                        if (x[0] <= 756.0) {
                                                            if (x[55] <= -2955.5) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[55] <= 105.0) {
                                                                if (x[22] <= 15070.0) {
                                                                    votes[0] += 1;
                                                                }

                                                                else {
                                                                    votes[3] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[16] <= -240.0) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    votes[2] += 1;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[55] <= 763.0) {
                                                            if (x[18] <= 3056.0) {
                                                                if (x[57] <= 1479.5) {
                                                                    if (x[53] <= -1194.0) {
                                                                        if (x[14] <= 2352.0) {
                                                                            votes[0] += 1;
                                                                        }

                                                                        else {
                                                                            votes[2] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[21] <= 16934.0) {
                                                                            if (x[9] <= 4232.0) {
                                                                                if (x[57] <= 670.0) {
                                                                                    if (x[4] <= 4472.0) {
                                                                                        votes[0] += 1;
                                                                                    }

                                                                                    else {
                                                                                        if (x[34] <= 81.0) {
                                                                                            votes[1] += 1;
                                                                                        }

                                                                                        else {
                                                                                            votes[0] += 1;
                                                                                        }
                                                                                    }
                                                                                }

                                                                                else {
                                                                                    if (x[54] <= -106.0) {
                                                                                        if (x[41] <= -285.0) {
                                                                                            votes[2] += 1;
                                                                                        }

                                                                                        else {
                                                                                            votes[0] += 1;
                                                                                        }
                                                                                    }

                                                                                    else {
                                                                                        votes[0] += 1;
                                                                                    }
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[2] <= 3142.0) {
                                                                                    if (x[12] <= 1614.0) {
                                                                                        votes[2] += 1;
                                                                                    }

                                                                                    else {
                                                                                        votes[0] += 1;
                                                                                    }
                                                                                }

                                                                                else {
                                                                                    votes[0] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[3] += 1;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[19] <= 992.0) {
                                                                        votes[1] += 1;
                                                                    }

                                                                    else {
                                                                        votes[0] += 1;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[16] <= 950.0) {
                                                                    votes[3] += 1;
                                                                }

                                                                else {
                                                                    votes[0] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[8] <= 1006.0) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[7] <= 3320.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[21] <= 14288.0) {
                                        if (x[13] <= -1358.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[40] <= -590.5) {
                                                if (x[37] <= 127.5) {
                                                    if (x[48] <= -1442.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[55] <= 1952.5) {
                                                    if (x[32] <= -2508.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[31] <= -871.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[52] <= 3408.0) {
                                            if (x[33] <= -1755.5) {
                                                if (x[0] <= 2756.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 1330.0) {
                                                    if (x[8] <= 2876.0) {
                                                        if (x[35] <= 1378.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[49] <= -13.0) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[39] <= 1487.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[16] <= 1648.0) {
                                                        if (x[0] <= 5362.0) {
                                                            if (x[34] <= 257.0) {
                                                                if (x[55] <= 2079.5) {
                                                                    votes[0] += 1;
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[31] <= 1611.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[9] <= 992.0) {
                                                    if (x[52] <= 5570.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[25] <= 12064.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[13] <= 3068.0) {
                                    if (x[27] <= 16990.0) {
                                        if (x[52] <= 263.5) {
                                            if (x[2] <= 3174.0) {
                                                if (x[55] <= 1284.5) {
                                                    if (x[8] <= 6640.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[35] <= 2541.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[33] <= -4031.5) {
                                                if (x[41] <= 5141.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                if (x[50] <= -2783.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[0] <= -3236.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[43] <= 1699.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[55] <= -1082.0) {
                                            if (x[20] <= 11316.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[38] <= 2655.5) {
                                                if (x[36] <= -2960.0) {
                                                    if (x[58] <= 1944.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[47] <= -981.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[35] <= 48.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[30] <= 412.5) {
                                                if (x[46] <= 620.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #3
                        if (x[38] <= 908.0) {
                            if (x[39] <= -606.5) {
                                if (x[0] <= -1494.0) {
                                    if (x[50] <= -5317.0) {
                                        if (x[1] <= -210.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[12] <= -1644.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[54] <= -3455.0) {
                                        if (x[59] <= 5126.5) {
                                            if (x[41] <= 6723.0) {
                                                if (x[21] <= 14774.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[27] <= 13968.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[8] <= 3300.0) {
                                            if (x[16] <= 18.0) {
                                                if (x[26] <= 14470.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[17] <= -4158.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[47] <= 3200.5) {
                                                    if (x[34] <= -2750.0) {
                                                        if (x[6] <= 3048.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[38] <= -2492.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            if (x[58] <= 969.5) {
                                                                if (x[24] <= 15234.0) {
                                                                    votes[0] += 1;
                                                                }

                                                                else {
                                                                    if (x[12] <= 1156.0) {
                                                                        votes[2] += 1;
                                                                    }

                                                                    else {
                                                                        votes[0] += 1;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[6] <= 654.0) {
                                                                    votes[2] += 1;
                                                                }

                                                                else {
                                                                    if (x[46] <= 101.5) {
                                                                        votes[3] += 1;
                                                                    }

                                                                    else {
                                                                        votes[1] += 1;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[7] <= -2264.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[42] <= -4333.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[26] <= 16068.0) {
                                    if (x[58] <= 848.5) {
                                        if (x[50] <= 3770.5) {
                                            if (x[50] <= -4059.0) {
                                                if (x[26] <= 13640.0) {
                                                    if (x[20] <= 17850.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[27] <= 16540.0) {
                                                        if (x[16] <= 2680.0) {
                                                            if (x[49] <= 1049.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                if (x[28] <= 13878.0) {
                                                                    votes[2] += 1;
                                                                }

                                                                else {
                                                                    votes[0] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[49] <= 2276.0) {
                                                    if (x[42] <= -2418.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[28] <= 16588.0) {
                                                            if (x[16] <= 3202.0) {
                                                                if (x[56] <= -2338.5) {
                                                                    votes[2] += 1;
                                                                }

                                                                else {
                                                                    if (x[39] <= -378.5) {
                                                                        if (x[58] <= -1539.5) {
                                                                            votes[2] += 1;
                                                                        }

                                                                        else {
                                                                            if (x[36] <= -359.0) {
                                                                                if (x[52] <= 247.5) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[0] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[0] += 1;
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[43] <= 1564.0) {
                                                                            if (x[21] <= 16832.0) {
                                                                                if (x[51] <= -40.5) {
                                                                                    votes[0] += 1;
                                                                                }

                                                                                else {
                                                                                    if (x[36] <= -382.5) {
                                                                                        if (x[58] <= -641.0) {
                                                                                            votes[2] += 1;
                                                                                        }

                                                                                        else {
                                                                                            votes[0] += 1;
                                                                                        }
                                                                                    }

                                                                                    else {
                                                                                        if (x[23] <= 14618.0) {
                                                                                            if (x[51] <= -13.0) {
                                                                                                if (x[10] <= 1418.0) {
                                                                                                    votes[0] += 1;
                                                                                                }

                                                                                                else {
                                                                                                    votes[3] += 1;
                                                                                                }
                                                                                            }

                                                                                            else {
                                                                                                votes[0] += 1;
                                                                                            }
                                                                                        }

                                                                                        else {
                                                                                            votes[0] += 1;
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[50] <= -5.0) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[0] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[52] <= -448.5) {
                                                                                votes[2] += 1;
                                                                            }

                                                                            else {
                                                                                votes[0] += 1;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[16] <= 3464.0) {
                                                                    votes[3] += 1;
                                                                }

                                                                else {
                                                                    if (x[20] <= 17210.0) {
                                                                        votes[0] += 1;
                                                                    }

                                                                    else {
                                                                        votes[3] += 1;
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[9] <= 4794.0) {
                                                                if (x[40] <= 2301.5) {
                                                                    votes[3] += 1;
                                                                }

                                                                else {
                                                                    votes[0] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[39] <= 1778.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[24] <= 13920.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 3776.0) {
                                                if (x[49] <= 5180.5) {
                                                    if (x[55] <= 2110.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[8] <= 1850.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[44] <= 1602.5) {
                                            if (x[49] <= -2508.5) {
                                                if (x[44] <= 78.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[26] <= 14720.0) {
                                                    if (x[41] <= -265.5) {
                                                        if (x[29] <= 13582.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            if (x[30] <= 981.0) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                if (x[10] <= 3108.0) {
                                                                    votes[0] += 1;
                                                                }

                                                                else {
                                                                    votes[2] += 1;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[55] <= -244.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 1214.0) {
                                                            if (x[1] <= 572.0) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[59] <= 1825.5) {
                                        if (x[58] <= -2348.5) {
                                            if (x[28] <= 16070.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[53] <= 215.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[47] <= 1947.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[25] <= 16150.0) {
                                if (x[6] <= -106.0) {
                                    if (x[36] <= 1519.5) {
                                        if (x[12] <= 776.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[0] <= 2152.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[38] <= 4421.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[31] <= 86.0) {
                                            if (x[46] <= 1058.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[37] <= 911.0) {
                                        if (x[16] <= 3344.0) {
                                            if (x[35] <= 76.0) {
                                                if (x[20] <= 14650.0) {
                                                    if (x[30] <= 443.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[22] <= 13724.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[5] <= 3352.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[51] <= 1568.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[35] <= -365.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[7] <= 332.0) {
                                                if (x[59] <= 4061.5) {
                                                    if (x[36] <= 1276.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[26] <= 18464.0) {
                                                    if (x[0] <= -1884.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[27] <= 17308.0) {
                                                            if (x[11] <= 3716.0) {
                                                                if (x[26] <= 15610.0) {
                                                                    if (x[7] <= 836.0) {
                                                                        if (x[35] <= 4424.0) {
                                                                            votes[3] += 1;
                                                                        }

                                                                        else {
                                                                            votes[1] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[1] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[39] <= 2709.0) {
                                                                        votes[0] += 1;
                                                                    }

                                                                    else {
                                                                        votes[1] += 1;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[3] <= 3820.0) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[31] <= -709.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[14] <= 3174.0) {
                                    if (x[14] <= -2296.0) {
                                        if (x[1] <= 2248.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[52] <= -6698.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[53] <= 1400.0) {
                                            if (x[45] <= 3565.5) {
                                                if (x[55] <= 3172.0) {
                                                    if (x[21] <= 12806.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            if (x[57] <= -818.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[37] <= -1293.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        // tree #4
                        if (x[57] <= -1354.0) {
                            if (x[31] <= 2611.5) {
                                if (x[23] <= 14482.0) {
                                    if (x[51] <= -4247.5) {
                                        if (x[46] <= 3461.0) {
                                            if (x[53] <= -5559.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[34] <= 2261.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[28] <= 15966.0) {
                                            if (x[14] <= -3676.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[3] <= 972.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[41] <= -741.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[16] <= 5216.0) {
                                                if (x[19] <= -2406.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[13] <= -1212.0) {
                                        if (x[34] <= -4330.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[31] <= -9208.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[48] <= 5217.5) {
                                                    if (x[55] <= 2519.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[49] <= -209.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[58] <= -1141.5) {
                                            if (x[18] <= -2124.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[14] <= 10164.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[9] <= 506.0) {
                                                if (x[37] <= -1412.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[17] <= 4010.0) {
                                                    if (x[55] <= -3825.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[7] <= -2278.0) {
                                    if (x[46] <= -3543.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[20] <= 18344.0) {
                                        if (x[14] <= -4986.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[59] <= 1441.0) {
                                if (x[50] <= 3387.0) {
                                    if (x[19] <= 3104.0) {
                                        if (x[50] <= -3198.0) {
                                            if (x[20] <= 14328.0) {
                                                if (x[44] <= 499.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[8] <= 1176.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[38] <= 2726.5) {
                                                    if (x[50] <= -3986.5) {
                                                        if (x[2] <= -1172.0) {
                                                            if (x[13] <= 1318.0) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[57] <= -576.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[16] <= -3252.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[58] <= -1549.5) {
                                                    if (x[18] <= 956.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[45] <= -633.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[38] <= -960.0) {
                                                        if (x[48] <= -504.0) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[38] <= -1795.5) {
                                                                if (x[37] <= -2527.5) {
                                                                    votes[3] += 1;
                                                                }

                                                                else {
                                                                    votes[2] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[54] <= -4182.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            if (x[26] <= 13416.0) {
                                                                if (x[47] <= 181.5) {
                                                                    votes[3] += 1;
                                                                }

                                                                else {
                                                                    votes[0] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[53] <= 2523.0) {
                                                                    if (x[29] <= 13492.0) {
                                                                        votes[2] += 1;
                                                                    }

                                                                    else {
                                                                        if (x[29] <= 13970.0) {
                                                                            if (x[57] <= 314.0) {
                                                                                if (x[18] <= 282.0) {
                                                                                    votes[3] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[0] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[1] <= 360.0) {
                                                                                    votes[0] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[39] <= -1595.5) {
                                                                                votes[2] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[36] <= -167.0) {
                                                                                    if (x[37] <= -130.0) {
                                                                                        if (x[36] <= -212.5) {
                                                                                            if (x[39] <= -534.0) {
                                                                                                if (x[27] <= 15054.0) {
                                                                                                    votes[2] += 1;
                                                                                                }

                                                                                                else {
                                                                                                    votes[0] += 1;
                                                                                                }
                                                                                            }

                                                                                            else {
                                                                                                votes[0] += 1;
                                                                                            }
                                                                                        }

                                                                                        else {
                                                                                            votes[2] += 1;
                                                                                        }
                                                                                    }

                                                                                    else {
                                                                                        votes[0] += 1;
                                                                                    }
                                                                                }

                                                                                else {
                                                                                    if (x[43] <= 894.0) {
                                                                                        votes[0] += 1;
                                                                                    }

                                                                                    else {
                                                                                        if (x[49] <= -520.0) {
                                                                                            if (x[26] <= 15586.0) {
                                                                                                votes[2] += 1;
                                                                                            }

                                                                                            else {
                                                                                                votes[0] += 1;
                                                                                            }
                                                                                        }

                                                                                        else {
                                                                                            votes[0] += 1;
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[34] <= -407.5) {
                                                                        votes[0] += 1;
                                                                    }

                                                                    else {
                                                                        votes[1] += 1;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[17] <= 1952.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[10] <= 3902.0) {
                                                if (x[9] <= 1704.0) {
                                                    if (x[11] <= 3994.0) {
                                                        if (x[43] <= -1122.0) {
                                                            if (x[37] <= -544.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[8] <= 2130.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[33] <= 674.5) {
                                                        if (x[28] <= 14686.0) {
                                                            if (x[39] <= -3342.5) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[17] <= 3534.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                if (x[25] <= 14292.0) {
                                                                    if (x[37] <= -1445.0) {
                                                                        votes[0] += 1;
                                                                    }

                                                                    else {
                                                                        votes[3] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[3] += 1;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[9] <= -1954.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[23] <= 13250.0) {
                                        if (x[23] <= 6908.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[52] <= 1686.0) {
                                            if (x[52] <= 939.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[24] <= 12300.0) {
                                                if (x[12] <= -5702.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[51] <= 3392.0) {
                                                    if (x[29] <= 14854.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[25] <= 14280.0) {
                                    if (x[29] <= 14440.0) {
                                        if (x[44] <= -509.5) {
                                            if (x[46] <= 584.0) {
                                                if (x[22] <= 11986.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[30] <= 3365.5) {
                                            if (x[33] <= -3032.0) {
                                                if (x[24] <= 13478.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[7] <= 4230.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[40] <= 1397.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[15] <= 4264.0) {
                                        if (x[37] <= 5194.5) {
                                            if (x[57] <= 1136.5) {
                                                if (x[54] <= -495.5) {
                                                    if (x[43] <= -1822.5) {
                                                        if (x[13] <= -2492.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[12] <= -3894.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[14] <= 152.0) {
                                                        if (x[14] <= 22.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 616.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #5
                        if (x[37] <= 818.5) {
                            if (x[38] <= -641.0) {
                                if (x[5] <= 2776.0) {
                                    if (x[32] <= -312.5) {
                                        if (x[8] <= 3088.0) {
                                            if (x[33] <= -140.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[8] <= 2220.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[46] <= -1893.5) {
                                            if (x[44] <= -3376.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[51] <= 2081.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 4948.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[8] <= 2994.0) {
                                                if (x[8] <= 1140.0) {
                                                    if (x[9] <= 3126.0) {
                                                        if (x[52] <= 26.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[55] <= 3157.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[28] <= 16320.0) {
                                                        if (x[8] <= 2468.0) {
                                                            if (x[14] <= 544.0) {
                                                                if (x[12] <= 878.0) {
                                                                    votes[0] += 1;
                                                                }

                                                                else {
                                                                    votes[3] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[46] <= -551.5) {
                                                                    votes[2] += 1;
                                                                }

                                                                else {
                                                                    if (x[59] <= 3956.5) {
                                                                        votes[0] += 1;
                                                                    }

                                                                    else {
                                                                        votes[2] += 1;
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[50] <= -2455.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[19] <= -3490.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[24] <= 15498.0) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[49] <= -294.0) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[50] <= -336.5) {
                                        if (x[59] <= -4248.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[53] <= -1244.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[36] <= -121.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[36] <= 3559.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[49] <= -1534.5) {
                                    if (x[17] <= -1996.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[6] <= 2736.0) {
                                            if (x[51] <= -1614.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[28] <= 16938.0) {
                                                    if (x[49] <= -2277.0) {
                                                        if (x[53] <= -192.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 658.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[25] <= 14892.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[54] <= -1243.5) {
                                        if (x[47] <= 1641.0) {
                                            if (x[17] <= 1314.0) {
                                                if (x[49] <= 1404.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[18] <= 730.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[16] <= 3954.0) {
                                                    if (x[3] <= 90.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[27] <= 16232.0) {
                                                            if (x[32] <= 2515.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 1062.0) {
                                                if (x[45] <= -1832.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[58] <= 1050.0) {
                                            if (x[59] <= -1591.0) {
                                                if (x[57] <= -2227.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[27] <= 15128.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= -748.0) {
                                                    if (x[31] <= 868.0) {
                                                        if (x[12] <= -824.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[52] <= 4064.5) {
                                                        if (x[49] <= 1396.0) {
                                                            if (x[21] <= 16612.0) {
                                                                if (x[47] <= 1303.0) {
                                                                    if (x[48] <= -1420.5) {
                                                                        if (x[4] <= 552.0) {
                                                                            votes[0] += 1;
                                                                        }

                                                                        else {
                                                                            votes[3] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[45] <= 894.0) {
                                                                            if (x[29] <= 13506.0) {
                                                                                votes[2] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[57] <= 301.0) {
                                                                                    if (x[28] <= 15498.0) {
                                                                                        votes[0] += 1;
                                                                                    }

                                                                                    else {
                                                                                        if (x[39] <= 632.0) {
                                                                                            votes[0] += 1;
                                                                                        }

                                                                                        else {
                                                                                            if (x[29] <= 14292.0) {
                                                                                                votes[3] += 1;
                                                                                            }

                                                                                            else {
                                                                                                votes[0] += 1;
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }

                                                                                else {
                                                                                    if (x[9] <= 3602.0) {
                                                                                        if (x[39] <= -987.5) {
                                                                                            votes[2] += 1;
                                                                                        }

                                                                                        else {
                                                                                            votes[0] += 1;
                                                                                        }
                                                                                    }

                                                                                    else {
                                                                                        if (x[3] <= 1966.0) {
                                                                                            votes[0] += 1;
                                                                                        }

                                                                                        else {
                                                                                            votes[2] += 1;
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[59] <= 238.5) {
                                                                                votes[0] += 1;
                                                                            }

                                                                            else {
                                                                                votes[2] += 1;
                                                                            }
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[52] <= -2002.0) {
                                                                    votes[2] += 1;
                                                                }

                                                                else {
                                                                    if (x[1] <= 3130.0) {
                                                                        votes[0] += 1;
                                                                    }

                                                                    else {
                                                                        votes[3] += 1;
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[15] <= 1786.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[36] <= 1727.0) {
                                                if (x[24] <= 14354.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[28] <= 14346.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[22] <= 16140.0) {
                                if (x[34] <= 1976.0) {
                                    if (x[9] <= 130.0) {
                                        if (x[28] <= 17720.0) {
                                            if (x[5] <= 1348.0) {
                                                if (x[5] <= 532.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[58] <= 2456.0) {
                                            if (x[16] <= 628.0) {
                                                if (x[41] <= -903.0) {
                                                    if (x[12] <= -1356.0) {
                                                        if (x[59] <= 717.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            if (x[39] <= 1641.5) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[21] <= 14116.0) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[26] <= 14064.0) {
                                                        if (x[46] <= 228.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[41] <= 1880.0) {
                                                    if (x[54] <= 1654.0) {
                                                        if (x[11] <= -1090.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            if (x[51] <= 2576.0) {
                                                                if (x[21] <= 18416.0) {
                                                                    votes[0] += 1;
                                                                }

                                                                else {
                                                                    votes[3] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[8] <= 76.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[58] <= 6249.5) {
                                        if (x[4] <= 574.0) {
                                            if (x[27] <= 16694.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[32] <= -1515.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[19] <= -314.0) {
                                            if (x[49] <= 6709.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[7] <= 3830.0) {
                                    if (x[11] <= 2664.0) {
                                        if (x[38] <= 571.0) {
                                            if (x[59] <= -3059.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[6] <= -1836.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[18] <= -208.0) {
                                                if (x[17] <= 524.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 2206.0) {
                                                    if (x[11] <= -1826.0) {
                                                        if (x[32] <= -1530.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[5] <= 2338.0) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[51] <= -2692.5) {
                                            if (x[43] <= -1970.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[20] <= 14314.0) {
                                        if (x[11] <= 11506.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        // tree #6
                        if (x[55] <= -1332.0) {
                            if (x[22] <= 14924.0) {
                                if (x[50] <= -5000.0) {
                                    if (x[1] <= -2970.0) {
                                        if (x[51] <= -8731.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= -3824.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[24] <= 18874.0) {
                                                if (x[43] <= -2550.0) {
                                                    if (x[51] <= -7924.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[6] <= 3784.0) {
                                        if (x[14] <= -1416.0) {
                                            if (x[43] <= 226.0) {
                                                if (x[47] <= 1365.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            if (x[57] <= -2912.0) {
                                                if (x[15] <= 3768.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[47] <= 1752.0) {
                                                    if (x[56] <= -1812.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[29] <= 16734.0) {
                                                            if (x[21] <= 17808.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[41] <= -4001.0) {
                                            if (x[25] <= 16082.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[35] <= -609.0) {
                                                if (x[38] <= 4451.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[12] <= -1306.0) {
                                    if (x[33] <= -4190.0) {
                                        if (x[59] <= -3832.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[13] <= -860.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[39] <= 3607.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[14] <= 2926.0) {
                                        if (x[18] <= -2322.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[19] <= -1508.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[23] <= 15108.0) {
                                                    if (x[29] <= 14920.0) {
                                                        if (x[37] <= 1268.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[7] <= 4466.0) {
                                            if (x[17] <= 3176.0) {
                                                if (x[2] <= 3372.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[48] <= 7477.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[37] <= -918.0) {
                                if (x[21] <= 15150.0) {
                                    if (x[9] <= 2238.0) {
                                        if (x[8] <= 1136.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[12] <= 408.0) {
                                                if (x[24] <= 14186.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[52] <= 2139.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[52] <= -295.0) {
                                            if (x[32] <= -2421.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            if (x[27] <= 22950.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 1516.0) {
                                        if (x[44] <= -481.0) {
                                            if (x[45] <= -310.0) {
                                                if (x[3] <= 802.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[58] <= -3974.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[51] <= 3961.5) {
                                            if (x[45] <= -1417.0) {
                                                if (x[1] <= 2364.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[39] <= 908.0) {
                                    if (x[58] <= 1436.0) {
                                        if (x[47] <= -1935.5) {
                                            if (x[55] <= -426.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[3] <= 4306.0) {
                                                    if (x[59] <= 1019.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[55] <= 631.5) {
                                                if (x[51] <= -2229.5) {
                                                    if (x[43] <= 3396.0) {
                                                        if (x[45] <= 357.0) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[8] <= 1814.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[33] <= 1951.5) {
                                                        if (x[21] <= 16606.0) {
                                                            if (x[58] <= -1552.0) {
                                                                if (x[41] <= -366.0) {
                                                                    if (x[14] <= 1654.0) {
                                                                        votes[0] += 1;
                                                                    }

                                                                    else {
                                                                        votes[3] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[2] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[49] <= -1867.0) {
                                                                    if (x[13] <= 1360.0) {
                                                                        votes[2] += 1;
                                                                    }

                                                                    else {
                                                                        if (x[47] <= -383.5) {
                                                                            votes[0] += 1;
                                                                        }

                                                                        else {
                                                                            votes[3] += 1;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[39] <= -1635.0) {
                                                                        if (x[42] <= -875.5) {
                                                                            votes[0] += 1;
                                                                        }

                                                                        else {
                                                                            votes[2] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[52] <= 3837.5) {
                                                                            if (x[57] <= 721.5) {
                                                                                if (x[50] <= -4791.5) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    if (x[47] <= 1303.0) {
                                                                                        if (x[21] <= 13834.0) {
                                                                                            if (x[10] <= 968.0) {
                                                                                                votes[1] += 1;
                                                                                            }

                                                                                            else {
                                                                                                votes[0] += 1;
                                                                                            }
                                                                                        }

                                                                                        else {
                                                                                            if (x[33] <= -333.0) {
                                                                                                if (x[29] <= 15454.0) {
                                                                                                    votes[0] += 1;
                                                                                                }

                                                                                                else {
                                                                                                    if (x[42] <= -343.5) {
                                                                                                        votes[0] += 1;
                                                                                                    }

                                                                                                    else {
                                                                                                        votes[2] += 1;
                                                                                                    }
                                                                                                }
                                                                                            }

                                                                                            else {
                                                                                                if (x[28] <= 13442.0) {
                                                                                                    if (x[17] <= 2266.0) {
                                                                                                        votes[3] += 1;
                                                                                                    }

                                                                                                    else {
                                                                                                        votes[0] += 1;
                                                                                                    }
                                                                                                }

                                                                                                else {
                                                                                                    if (x[21] <= 15438.0) {
                                                                                                        votes[0] += 1;
                                                                                                    }

                                                                                                    else {
                                                                                                        if (x[38] <= 696.0) {
                                                                                                            votes[0] += 1;
                                                                                                        }

                                                                                                        else {
                                                                                                            if (x[39] <= 626.0) {
                                                                                                                votes[0] += 1;
                                                                                                            }

                                                                                                            else {
                                                                                                                votes[3] += 1;
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }

                                                                                    else {
                                                                                        if (x[3] <= 3540.0) {
                                                                                            votes[0] += 1;
                                                                                        }

                                                                                        else {
                                                                                            votes[1] += 1;
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[16] <= 1220.0) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[0] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[1] += 1;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[5] <= 1666.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[21] <= 15644.0) {
                                                            if (x[36] <= 896.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[53] <= 1702.0) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[52] <= 2730.5) {
                                                    if (x[25] <= 15022.0) {
                                                        if (x[15] <= 2648.0) {
                                                            if (x[25] <= 14502.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[31] <= 3286.5) {
                                                            if (x[59] <= -1190.0) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= -222.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[17] <= 2282.0) {
                                            if (x[15] <= 4994.0) {
                                                if (x[59] <= 2364.5) {
                                                    if (x[21] <= 15070.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[21] <= 16040.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[47] <= -380.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            if (x[17] <= 8990.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[9] <= 2410.0) {
                                        if (x[4] <= -2510.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[48] <= -918.5) {
                                                if (x[58] <= 3024.5) {
                                                    if (x[17] <= 2210.0) {
                                                        if (x[15] <= -4518.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            if (x[33] <= 195.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[17] <= 774.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[19] <= 1752.0) {
                                                            if (x[10] <= 1168.0) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[59] <= 3283.5) {
                                                    if (x[0] <= -288.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[14] <= -150.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[18] <= 5446.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[6] <= 538.0) {
                                            if (x[47] <= -1540.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[27] <= 14602.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[28] <= 19026.0) {
                                                if (x[38] <= 559.5) {
                                                    if (x[12] <= 1872.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[19] <= 9128.0) {
                                                        if (x[15] <= 4370.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // return argmax of votes
                        uint8_t classIdx = 0;
                        float maxVotes = votes[0];

                        for (uint8_t i = 1; i < 4; i++) {
                            if (votes[i] > maxVotes) {
                                classIdx = i;
                                maxVotes = votes[i];
                            }
                        }

                        return classIdx;
                    }

                protected:
                };
            }
        }
    }