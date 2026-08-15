
# 학생 성적 관리: student_scores.py
students = [
    {'name': '홍길동', 'score': 85},
    {'name': '이순신', 'score': 92},
    {'name': '강감찬', 'score': 78},
]
 
total = sum(s['score'] for s in students)
avg   = total / len(students)
print(f'평균 점수: {avg:.1f}')
 
students.sort(key=lambda s: s['score'], reverse=True)
for rank, s in enumerate(students, 1):
    print(f'{rank}위: {s["name"]} ({s["score"]}점)')
