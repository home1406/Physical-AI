int speakerPin = 9; // 피에조에 연결된 핀
int length = 15; // 노트의 수
char notes[] = "ccggaagffeeddc "; // 공백은 휴식
int beats[] = { 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 2, 4 };
int tempo = 300;

void playTone(int tone, int duration) {
for (long i = 0; i < duration * 1000L; i += tone * 2) {
	digitalWrite(speakerPin, HIGH);
	delayMicroseconds(tone);
	digitalWrite(speakerPin, LOW);
	delayMicroseconds(tone);
	}
}
// timeHigh값을 특별한 노트에 설정
void playNote(char note, int duration) {
	char names[] = { 'c', 'd', 'e', 'f', 'g', 'a', 'b', 'C' };
	int tones[] = { 1915, 1700, 1519, 1432, 1275, 1136, 1014, 956 };
	for (int i = 0; i < 8; i++) { // 노트이름에 연결된 곡을 연주
	if (names[i] == note) {
	playTone(tones[i], duration);
	}
	}
}
void setup() {
     pinMode(speakerPin, OUTPUT); // speakerPin을 출력으로 설정
}
// Play the tune
void loop() {
	for (int i = 0; i < length; i++) {
	if (notes[i] == ' ') {
	delay(beats[i] * tempo); // 휴식
	}
	else {
	playNote(notes[i], beats[i] * tempo);
	}
	delay(tempo / 2); //note간의 휴지
	}
}


