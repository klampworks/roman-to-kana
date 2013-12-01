#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int table[] = {
			0xffe38181, // ぁ	0
			0xffe38182, // あ	1
			0xffe38183, // ぃ	2
			0xffe38184, // い	3
			0xffe38185, // ぅ	4
			0xffe38186, // う	5
			0xffe38187, // ぇ	6
			0xffe38188, // え	7
			0xffe38189, // ぉ	8
			0xffe3818a, // お	9
			0xffe3818b, // か	10
			0xffe3818c, // が	11
			0xffe3818d, // き	12
			0xffe3818e, // ぎ	13
			0xffe3818f, // く	14
			0xffe38190, // ぐ	15
			0xffe38191, // け	16
			0xffe38192, // げ	17
			0xffe38193, // こ	18
			0xffe38194, // ご	19
			0xffe38195, // さ	20
			0xffe38196, // ざ	21
			0xffe38197, // し	22
			0xffe38198, // じ	23
			0xffe38199, // す	24
			0xffe3819a, // ず	25
			0xffe3819b, // せ	26
			0xffe3819c, // ぜ	27
			0xffe3819d, // そ	28
			0xffe3819e, // ぞ	29
			0xffe3819f, // た	30
			0xffe381a0, // だ	31
			0xffe381a1, // ち	32
			0xffe381a2, // ぢ	33
			0xffe381a3, // っ	34
			0xffe381a4, // つ	35
			0xffe381a5, // づ	36
			0xffe381a6, // て	37
			0xffe381a7, // で	38
			0xffe381a8, // と	39
			0xffe381a9, // ど	40
			0xffe381aa, // な	41
			0xffe381ab, // に	42
			0xffe381ac, // ぬ	43
			0xffe381ad, // ね	44
			0xffe381ae, // の	45
			0xffe381af, // は	46
			0xffe381b0, // ば	47
			0xffe381b1, // ぱ	48
			0xffe381b2, // ひ	49
			0xffe381b3, // び	50
			0xffe381b4, // ぴ	51
			0xffe381b5, // ふ	52
			0xffe381b6, // ぶ	53
			0xffe381b7, // ぷ	54
			0xffe381b8, // へ	55
			0xffe381b9, // べ	56
			0xffe381ba, // ぺ	57
			0xffe381bb, // ほ	58
			0xffe381bc, // ぼ	59
			0xffe381bd, // ぽ	60
			0xffe381be, // ま	61
			0xffe381bf, // み	62
			0xffe38280, // む	63
			0xffe38281, // め	64
			0xffe38282, // も	65
			0xffe38283, // ゃ	66
			0xffe38284, // や	67
			0xffe38285, // ゅ	68
			0xffe38286, // ゆ	69
			0xffe38287, // ょ	70
			0xffe38288, // よ	71
			0xffe38289, // ら	72
			0xffe3828a, // り	73
			0xffe3828b, // る	74
			0xffe3828c, // れ	75
			0xffe3828d, // ろ	76
			0xffe3828e, // ゎ	77
			0xffe3828f, // わ	78
			0xffe38290, // ゐ	79
			0xffe38291, // ゑ	80
			0xffe38292, // を	81
			0xffe38293, // ん	82
			0xffe382a1, // ァ	83
			0xffe382a2, // ア	84
			0xffe382a3, // ィ	85
			0xffe382a4, // イ	86
			0xffe382a5, // ゥ	87
			0xffe382a6, // ウ	88
			0xffe382a7, // ェ	89
			0xffe382a8, // エ	90
			0xffe382a9, // ォ	91
			0xffe382aa, // オ	92
			0xffe382ab, // カ	93
			0xffe382ac, // ガ	94
			0xffe382ad, // キ	95
			0xffe382ae, // ギ	96
			0xffe382af, // ク	97
			0xffe382b0, // グ	98
			0xffe382b1, // ケ	99
			0xffe382b2, // ゲ	100
			0xffe382b3, // コ	101
			0xffe382b4, // ゴ	102
			0xffe382b5, // サ	103
			0xffe382b6, // ザ	104
			0xffe382b7, // シ	105
			0xffe382b8, // ジ	106
			0xffe382b9, // ス	107
			0xffe382ba, // ズ	108
			0xffe382bb, // セ	109
			0xffe382bc, // ゼ	110
			0xffe382bd, // ソ	111
			0xffe382be, // ゾ	112
			0xffe382bf,  // タ	113
			0xffe38380, //  ダ	114
			0xffe38381, //  チ	115
			0xffe38382, //  ヂ	116
			0xffe38383, //  ッ	117
			0xffe38384, //  ツ	118
			0xffe38385, //  ヅ	119
			0xffe38386, //  テ	120
			0xffe38387, //  デ	121
			0xffe38388, //  ト	122
			0xffe38389, //  ド	123
			0xffe3838a, //  ナ	124
			0xffe3838b, //  ニ	125
			0xffe3838c, //  ヌ	126
			0xffe3838d, //  ネ	127
			0xffe3838e, //  ノ	128
			0xffe3838f, //  ハ	129
			0xffe38390, //  バ	130
			0xffe38391, //  パ	131
			0xffe38392, //  ヒ	132
			0xffe38393, //  ビ	133
			0xffe38394, //  ピ	134
			0xffe38395, //  フ	135
			0xffe38396, //  ブ	136
			0xffe38397, //  プ	137
			0xffe38398, //  ヘ	138
			0xffe38399, //  ベ	139
			0xffe3839a, //  ペ	140
			0xffe3839b, //  ホ	141
			0xffe3839c, //  ボ	142
			0xffe3839d, //  ポ	143
			0xffe3839e, //  マ	144
			0xffe3839f, //  ミ	145
			0xffe383a0, //  ム	146
			0xffe383a1, //  メ	147
			0xffe383a2, //  モ	148
			0xffe383a3, //  ャ	149
			0xffe383a4, //  ヤ	150
			0xffe383a5, //  ュ	151
			0xffe383a6, //  ユ	152
			0xffe383a7, //  ョ	153
			0xffe383a8, //  ヨ	154
			0xffe383a9, //  ラ	155
			0xffe383aa, //  リ	156
			0xffe383ab, //  ル	157
			0xffe383ac, //  レ	158
			0xffe383ad, //  ロ	159
			0xffe383ae, //  ヮ	160
			0xffe383af, //  ワ	161
			0xffe383b0, //  ヰ	162
			0xffe383b1, //  ヱ	163
			0xffe383b2, //  ヲ	164
			0xffe383b3, //  ン	165
			0xffe383b4, //  ヴ	166
			0xffe383b5, //  ヵ	167
			0xffe383b6 //  ヶ	168
	};


int my_strlen_utf8_c(char *s) {
   int i = 0, j = 0;
   while (s[i]) {
     if ((s[i] & 0xc0) != 0x80)
    	 j++;
    	 i++;
   }
   return j;
}

void shift(unsigned int *wide) {
	int count = 0;
	int flag = 0;
	while (wide[count]) {
		if (flag) {
			wide[count -1] = wide[count];
		}

		if (wide[count] == 0xffffffff) {
			flag = 1;
		}
		count++;
		//printf("mi - %x\n", wide[count++]);
	}

	if (flag) {
		wide[count-1] = '\0';
		//this is pretty ineffeiciant
		//maybe record count when flag is set and start search from there
		shift(wide);
	}
}

void set(unsigned int *wide, int count, unsigned int value, int del) {
	wide[count] = value;
	for (del = del; del > 0; del--) {
		wide[count + del] = 0xffffffff;
	}
	shift(wide);
}

void THREE(unsigned int *wide, int count, unsigned int kotomi) {
	switch (wide[count + 2]) {
		case 'A':
			set(wide, count, kotomi, 0); //
			set(wide, count + 1, table[66], 1); //ゃ
			break;
		case 'O':
			set(wide, count, kotomi, 0); //
			set(wide, count + 1, table[70], 1); //ょ
			break;
		case 'U':
			set(wide, count, kotomi, 0); //
			set(wide, count + 1, table[68], 1); //ゅ
			break;
		case 'I'://ffe38197 = し
			set(wide, count, kotomi, 2); //
			break;
	}
}

void AEIOU(unsigned int *wide, int count, unsigned int a, unsigned int e, unsigned int i, unsigned int o, unsigned int u) {
	switch (wide[count + 1]) {

		case 'A':
			if (a > 0) {
				set(wide, count, a, 1);
			}
			break;

		case 'E':
			if (e > 0) {
				set(wide, count, e, 1);
			}
			break;

		case 'I':
			if (i > 0) {
				set(wide, count, i, 1);
			}
			break;

		case 'Y':
			if (i > 0) {
				THREE(wide, count, i);
			}
			break;

		case 'O':
			if (o > 0) {
				set(wide, count, o, 1);
			}
			break;

		case 'U':
			if (u > 0) {
				set(wide, count, u, 1);
			}
			break;

		case 'S':
			if (wide[count + 2] == 'U') {
				set(wide, count, table[119], 2); //つ
			}
		break;
	}
}

void AEIOU_h(unsigned int *wide, int count, unsigned int a, unsigned int e, unsigned int i, unsigned int o, unsigned int u, unsigned int h) {
	if (wide[count + 1] == 'H') {
			THREE(wide, count, h);
	} else {
		AEIOU(wide, count, a, e, i, o, u);
	}

}

void three(unsigned int *wide, int count, unsigned int kotomi) {
	switch (wide[count + 2]) {
		case 'a':
			set(wide, count, kotomi, 0); //
			set(wide, count + 1, table[66], 1); //ゃ
			break;
		case 'o':
			set(wide, count, kotomi, 0); //
			set(wide, count + 1, table[70], 1); //ょ
			break;
		case 'u':
			set(wide, count, kotomi, 0); //
			set(wide, count + 1, table[68], 1); //ゅ
			break;
		case 'i'://ffe38197 = し
			set(wide, count, kotomi, 2); //
			break;
	}
}

void aeiou(unsigned int *wide, int count, unsigned int a, unsigned int e, unsigned int i, unsigned int o, unsigned int u) {
	switch (wide[count + 1]) {
	case 'a':
		if (a > 0) {
			set(wide, count, a, 1);
		}
		break;

	case 'e':
		if (e > 0) {
			set(wide, count, e, 1);
		}
		break;

	case 'i':
		if (i > 0) {
			set(wide, count, i, 1);
		}
		break;

	case 'y':
		if (i > 0) {
			three(wide, count, i);
		}
		break;

	case 'o':
		if (o > 0) {
			set(wide, count, o, 1);
		}
		break;

	case 'u':
		if (u > 0) {
			set(wide, count, u, 1);
		}
		break;

	case 's':
		if (wide[count + 2] == 'u') {
			set(wide, count, table[35], 2); //つ
		}
	break;
	}
}

void aeiou_h(unsigned int *wide, int count, unsigned int a, unsigned int e, unsigned int i, unsigned int o, unsigned int u, unsigned int h) {
	if (wide[count + 1] == 'h') {
			three(wide, count, h);
	} else {
		aeiou(wide, count, a, e, i, o, u);
	}

}

void to_wide(char * input, unsigned int *wide) {
	int count = 0;
	int count_2 = 0;
	while(input[count]) {
		if (input[count] > 0) {
			wide[count_2] = input[count];
			count++;
		} else {
			wide[count_2] = (0x10000 * (input[count] + 1)) + (0x100 * (input[count+1] + 1)) + (0x1 * input[count+2]);
			count +=3;
		}
		count_2++;
	}
}

void to_uni(char *output, unsigned int *wide) {
	int count = 0;
	int count_2 = 0;
	while (wide[count]) {
		if (wide[count] < 0xff) {
			output[count_2] = wide[count];
		} else {
			output[count_2] = (((wide[count] - 0xff000000 ) / 0x10000) % 0x100);
			output[++count_2] = (((wide[count] - 0xff000000 ) / 0x100) % 0x100);
			output[++count_2] =   (wide[count] - 0xff000000 ) % 0x100;
		}
		count_2++;
		count++;
	}
}

char * convert(char *input) {

	//int size = sizeof(unsigned int) * strlen(input);

	//printf("%s, %d", input, strlen(input));
	int size = (strlen(input) * 3) + 1;
	unsigned int * wide;

	wide = malloc(size * sizeof(unsigned int));
	//wide = malloc(size);

	to_wide(input, wide);

	int count = 0;
	while (wide[count]) {

		switch (wide[count]) {

		case 'k':
			aeiou(wide, count, table[10], table[16], table[12], table[18], table[14]);
			break;

		case 'g':
			aeiou(wide, count, table[11], table[17], table[13], table[19], table[15]);
			break;

		case 's':
			aeiou_h(wide, count, table[20], table[26], 0, table[28], table[24], table[22]);
			break;

		case 'z':
			aeiou(wide, count, table[21], table[27], 0, table[29], table[25]);
			break;

		case 'j':
			aeiou(wide, count, 0, 0, table[23], 0, 0);
			break;

		case 't':
			aeiou(wide, count, table[30], table[37], 0, table[39], 0);
			break;

		case 'c':
			if (wide[count + 1] == 'h') {
				three(wide, count, table[32]); //ち
			}
			break;

		case 'd':
			aeiou(wide, count, table[31], table[38], 0, table[40], 0);
			break;

		case 'n':
			if (wide[count + 1] != 'a' && wide[count + 1] != 'e' && wide[count + 1] != 'i' && wide[count + 1] != 'o' && wide[count + 1] != 'u') {
				set(wide, count, table[82], 0);
			}
			aeiou(wide, count, table[41], table[44], table[42], table[45], table[43]);
			break;

		case 'm':
			aeiou(wide, count, table[61], table[64], table[62], table[65], table[63]);
			break;

		case 'h':
			aeiou(wide, count, table[46], table[55], table[49], table[58], 0);
			break;

		case 'b':
			aeiou(wide, count, table[47], table[56], table[50], table[59], table[53]);
			break;

		case 'p':
			aeiou(wide, count, table[48], table[57], table[51], table[60], table[54]);
			break;

		case 'r':
			aeiou(wide, count, table[72], table[75], table[73], table[76], table[74]);
			break;

		case 'y':
			aeiou(wide, count, table[72], 0, 0, table[71], table[69]);
			break;

		case 'f':
			aeiou(wide, count, 0, 0, 0, 0, table[52]);
			break;

		case 'w':
			aeiou(wide, count, table[78], 0, 0, table[81], 0);
			break;

		case 'a':
			set(wide, count, table[1], 0);
			break;

		case 'e':
			set(wide, count, table[7], 0);
			break;

		case 'i':
			set(wide, count, table[3], 0);
			break;

		case 'o':
			set(wide, count, table[9], 0);
			break;

		case 'u':
			set(wide, count, table[5], 0);
			break;

		case 'K':
			AEIOU(wide, count, table[93], table[99], table[95], table[101], table[97]);
			break;

		case 'G':
			AEIOU(wide, count, table[94], table[100], table[96], table[102], table[98]);
			break;

		case 'S':
			AEIOU_h(wide, count, table[103], table[109], 0, table[111], table[107], table[105]);
			break;

		case 'Z':
			AEIOU(wide, count, table[104], table[110], 0, table[112], table[108]);
			break;

		case 'J':
			AEIOU(wide, count, 0, 0, table[106], 0, 0);
			break;

		case 'T':
			AEIOU(wide, count, table[113], table[120], 0, table[122], 0);
			break;

		case 'C':
			if (wide[count + 1] == 'h') {
				THREE(wide, count, table[115]); //ち
			}
			break;

		case 'D':
			AEIOU(wide, count, table[114], table[121], 0, table[123], 0);
			break;

		case 'N':
			AEIOU(wide, count, table[124], table[127], table[125], table[128], table[126]);
			break;

		case 'M':
			AEIOU(wide, count, table[144], table[147], table[145], table[148], table[146]);
			break;

		case 'H':
			AEIOU(wide, count, table[129], table[138], table[132], table[141], 0);
			break;

		case 'B':
			AEIOU(wide, count, table[130], table[139], table[133], table[142], table[136]);
			break;

		case 'P':
			AEIOU(wide, count, table[131], table[140], table[134], table[143], table[137]);
			break;

		case 'R':
			AEIOU(wide, count, table[155], table[158], table[156], table[159], table[157]);
			break;

		case 'Y':
			AEIOU(wide, count, table[150], 0, 0, table[154], table[152]);
			break;

		case 'F':
			AEIOU(wide, count, 0, 0, 0, 0, table[135]);
			break;

		case 'W':
			AEIOU(wide, count, table[161], 0, 0, table[164], 0);
			break;

		case 'A':
			set(wide, count, table[84], 0);
			break;

		case 'E':
			set(wide, count, table[90], 0);
			break;

		case 'I':
			set(wide, count, table[86], 0);
			break;

		case 'O':
			set(wide, count, table[92], 0);
			break;

		case 'U':
			set(wide, count, table[88], 0);
			break;

		default:
			break;

		}

		if (wide[count] == wide[count + 1]) {
			set(wide, count, table[34], 0);
		}
		count++;
	}

	shift(wide);

	char *output = '\0';
	output = malloc((((size - 1) / 3) + 1) * sizeof(char));
	to_uni(output, wide);

	free(wide);
	return output;

}

int main(int argc, char *argv[]) {

	//char * input = "SEtsuna kiyoura ecchi ZIyshusijdfhusikhg";
	char * output;

	output = convert(argv[1]);
	printf("%s\n",  output);

}
