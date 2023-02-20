#include <eden.hpp>

const char* eden::withdraw_ricardian = R"(---
spec_version: "0.1.0"
title: 내 에덴 잔액에서 인출하기
summary: Withdraw {{nowrap quantity}} from my Eden balance
icon: https://ipfs.io/ipfs/QmToeuuNcTXgZPhGLShi9E18qFyQfr92b8fmjWS3roJwq5#aae9c37e262c08f73151a6d415df37d4317de36d76aabfaa1a6249cfdeaffeb2
---

사용 가능한 내 Eden 계정 잔액에서 {{quantity}}를 인출합니다.)";

const char* eden::genesis_ricardian = R"(---
spec_version: "0.1.0"
title: 에덴 커뮤니티 시작
summary: Found a new community with Genesis members
icon: https://ipfs.io/ipfs/QmToeuuNcTXgZPhGLShi9E18qFyQfr92b8fmjWS3roJwq5#aae9c37e262c08f73151a6d415df37d4317de36d76aabfaa1a6249cfdeaffeb2
---

저는 이로써 에덴 코리아 평화 조약 및 그 하위 규칙을 토대로 하는 {{community}}를 설립합니다:

## Peace Treaty
{{$clauses.peacetreaty}}

## Bylaws
{{$clauses.bylaws}})";

const char* eden::clearall_ricardian = R"(---
spec_version: "0.1.0"
title: 에덴 커뮤니티 삭제
summary: WARNING - DELETING COMMUNITY RECORDS
icon: https://ipfs.io/ipfs/QmToeuuNcTXgZPhGLShi9E18qFyQfr92b8fmjWS3roJwq5#aae9c37e262c08f73151a6d415df37d4317de36d76aabfaa1a6249cfdeaffeb2
---

저는 이 Eden 커뮤니티 관련 모든 테이블을 영구적으로 삭제하며, 이 권한은 Eden 커뮤니티로부터 위임 받았음을 명백히합니다. 저는 블록체인 히스토리에 남겨진 회원 정보를 제외하고 모든 커뮤니티 구성원 및 체인에 저장된 커뮤니티 관련 정보가 영구적으로 삭제됨을 이해했습니다.)";

const char* eden::inductinit_ricardian = R"(---
spec_version: "0.1.0"
title: 에덴에 새구성원 초대
summary: Invite someone into the community
icon: https://ipfs.io/ipfs/QmToeuuNcTXgZPhGLShi9E18qFyQfr92b8fmjWS3roJwq5#aae9c37e262c08f73151a6d415df37d4317de36d76aabfaa1a6249cfdeaffeb2
---

저는 Eden 커뮤니티의 회원으로서 {{invitee}}님을 Eden 커뮤니티의 새 구성원으로 초대합니다. 저는 Eden 커뮤니티 구성원인 {{witnesses.[0]}}님과 {{witnesses.[1]}}님이 {{invitee}}님이 초대식 증인으로서 참관함을 확인했습니다.)";

const char* eden::inductprofil_ricardian = R"(---
spec_version: "0.1.0"
title: 내 에덴 프로필 만들기
summary: Affirm profile, Peace Treaty and Bylaws
icon: https://ipfs.io/ipfs/QmToeuuNcTXgZPhGLShi9E18qFyQfr92b8fmjWS3roJwq5#aae9c37e262c08f73151a6d415df37d4317de36d76aabfaa1a6249cfdeaffeb2
---

저는 {{new_member_profile.name}}은 Eden 커뮤니티에 제출한 프로필 정보가 정확한 본인의 정보이며 도용된 것이 아님을 확인합니다. 저는 이 Eden 커뮤니티의 평화 조약과 하위 규칙 준수를 약속합니다:

## Peace Treaty
{{$clauses.peacetreaty}}

## Bylaws
{{$clauses.bylaws}})";

const char* eden::inductvideo_ricardian = R"(---
spec_version: "0.1.0"
title: 입회식을 기록에 추가
summary: Add video recording of invitee's induction ceremony to the record
icon: https://ipfs.io/ipfs/QmToeuuNcTXgZPhGLShi9E18qFyQfr92b8fmjWS3roJwq5#aae9c37e262c08f73151a6d415df37d4317de36d76aabfaa1a6249cfdeaffeb2
---

저는 초대식 #{{id}}에서 초대 받은 예비 회원의 에덴 초대식을 참관했으며, 이에 해당 영상 IPFS CID를 첨부합니다.)";

const char* eden::inductendors_ricardian = R"(---
spec_version: "0.1.0"
title: 예비 에덴 회원 지지
summary: Endorsement of invitee for induction into Eden community
icon: https://ipfs.io/ipfs/QmToeuuNcTXgZPhGLShi9E18qFyQfr92b8fmjWS3roJwq5#aae9c37e262c08f73151a6d415df37d4317de36d76aabfaa1a6249cfdeaffeb2
---

저는 초대 받은 예비 회원의 초대식 #{{id}}을 참관했으며, 해당 예비 회원이 에덴 평화 조약을 이해하고 있으며 이를 준수할 것이라 믿습니다. 저는 예비 회원의 이름, 프로필 소개, 소셜 미디어 서비스 계정 링크, 초대식 비디오 녹화를 포함한 모든 프로필 정보를 주의 깊게 검토했으며, 내가 아는 한 그 정보가 정확함을 확인했습니다. 저는 해당 예비 회원이 커뮤니티의 새 구성원이 됨을 지지하며, Eden 평화 조약 및 그 하위 규칙에 따라 이 Eden 커뮤니티에 초대합니다:

## Peace Treaty
{{$clauses.peacetreaty}}

## Bylaws
{{$clauses.bylaws}})";

const char* eden::inductdonate_ricardian = R"(---
spec_version: "0.1.0"
title: 에덴 커뮤니티에 기부하기
summary: Submit {{nowrap quantity}} donation and activate your membership
icon: https://ipfs.io/ipfs/QmToeuuNcTXgZPhGLShi9E18qFyQfr92b8fmjWS3roJwq5#aae9c37e262c08f73151a6d415df37d4317de36d76aabfaa1a6249cfdeaffeb2
---

저는 제 이름, 프로필 설명 및 소셜 링크를 포함하여 제출한 프로필 정보를 주의 깊게 검토했으며, 제가 아는 한 그 정보가 틀림 없는 사실임을 확인했습니다. 저는 이 Eden 커뮤니티에 자발적으로 {{quantity}}를 기부합니다. 저는 에덴 평화 조약을 읽고 이해했으며, 해당 평화 조약을 준수하겠습니다.

## Peace Treaty
{{$clauses.peacetreaty}}

## Bylaws
{{$clauses.bylaws}})";

const char* eden::inductcancel_ricardian = R"(---
spec_version: "0.1.0"
title: 초대 취소
summary: Cancel Induction {{nowrap id}}
icon: https://ipfs.io/ipfs/QmToeuuNcTXgZPhGLShi9E18qFyQfr92b8fmjWS3roJwq5#aae9c37e262c08f73151a6d415df37d4317de36d76aabfaa1a6249cfdeaffeb2
---

초대식 (대기 중인 초대) #{{id}}를 취소합니다. 초대자, 또는 증인만 대기 중인 초대를 취소할 수 있습니다. 이 작업은 체인 상태에 저장된 초대 기록 및 관련 증인 보증 기록을 삭제합니다. 그러나 관련 정보는 블록체인 히스토리에 남습니다.)";

const char* eden::inducted_ricardian = R"(---
spec_version: "0.1.0"
title: Inducted (Inline Action)
summary: Internal inline action
icon: https://ipfs.io/ipfs/QmToeuuNcTXgZPhGLShi9E18qFyQfr92b8fmjWS3roJwq5#aae9c37e262c08f73151a6d415df37d4317de36d76aabfaa1a6249cfdeaffeb2
---

이 작업은 직접 호출되지 않습니다. 회원을 활성화하고 인덕션 테이블을 정리하는 eden::inductdonate의 끝에서 호출되는 인라인 액션입니다.)";

const char* eden::gc_ricardian = R"(---
spec_version: "0.1.0"
title: Garbage Collect
summary: Clean up expired or moot invitations and endorsements
icon: https://ipfs.io/ipfs/QmToeuuNcTXgZPhGLShi9E18qFyQfr92b8fmjWS3roJwq5#aae9c37e262c08f73151a6d415df37d4317de36d76aabfaa1a6249cfdeaffeb2
---

만료된 초대식을 제거하고, 중복된 초대 기록 및 관련 보증 기록에 대한 쟁점을 제기합니다. 이것은 호출해도 안전한 관리 조치입니다.)";

const char* eden::peacetreaty_clause =
    R"(Eden Korea는 운영, 발전, 관리에 있어 다음의 핵심 규칙을 반드시 준수해야 합니다.
I. 자발적 신의성실 추구
I.a. Eden Korea 및 Eden Korea와 직접 관련된 조직의 운영과 관리는 회원들의 자발적인 참여로 운영되어야 하며 회원들은 신의성실의 원칙에 입각해 Eden Korea의 운영에 참여합니다.
II. 에덴 코리아 회원 자격:
II.a. 모든 자연인은 관련 하위 규칙에 따라 Eden Korea 커뮤니티 회원 자격을 가질 수 있습니다.
II.b. 모든 회원은 관련 하위 규칙에 따라 Eden Korea 커뮤니티 회원 자격을 상실, 또는 박탈 당할 수 있습니다.
II.c. 회원 자격을 박탈 당하는 경우를 제외하고, 모든 회원의 회원 자격 유지는 자발적이며 각 회원은 통보 후 언제든 Eden Korea 커뮤니티 회원 자격을 포기할 수 있습니다.
III. 정치 플레이 오프
III.a. Eden Korea 선거는 EdenOS 프로토콜을 사용한 다음과 같은 합의 프로세스로서 진행되어야 합니다.
III.b. 선거 참가자는 반드시 4~6명의 최소 단위로 그룹화되어야 합니다.
III.c. 선거 참가자 그룹 생성 과정은 반드시 무작위 프로세스를 결합해야 합니다.
III.d. 선거는 여러 단계의 합의로 계층화 되어야 합니다.
III.e. 선거의 각 라운드는 반드시 서로 식별가능하며 상호작용이 가능한 동영상 회의 형태로서 IPFS 기술로 퍼블릭 블록체인에 기록되어야 합니다. 
III.f. 선거의 각 라운드는 동시에 진행되어 중복 투표를 방지해야 합니다.
III.g. 선거의 최종 결과는 반드시 EOS 퍼블릭 블록체인에 기록해 결과의 투명함과 불변성을 담보해야 합니다.
IV. 검열 및 오용 저항
IV.a. Eden Korea 커뮤니티 및 EdenOS 프로토콜은 특정 단체, 특정 개인, 특정 캠페인을 위해 사유화 또는 오용 될 수 없습니다.
V. 의존성 최소화의 법칙
V.a. 의존성 최소화의 법칙에 따라 선출된 합의자는 전체 프로토콜에 등록된 회원 ⅔+1 동의를 얻는 절차를 거치지 않은 채 Eden Korea 커뮤니티 공동의 의견을 대표하거나 대변할 수 없습니다.
VI. 정당 정치의 지양
VI.a. Eden Korea는 운영과 발전, 관리에 있어 협업과 포용을 지향하고 편가르기에 의한 정당 형성을 방지하며, 다양한 소수 의견이 표현될 기회를 부여해야 합니다.
VII. 기금 집행의 정당성
VII.a. Eden Korea의 기금 집행은 정당한 절차를 걸쳐 선출된 합의자에 할당되는 EdenOS 프로토콜의 월간 자동 지출만 인정합니다. 이 외 개인 및 집단의 자의적 판단에 의한 기금 집행은 어떠한 방법에도 정당화될 수 없습니다.
VIII. 지속적 선거 시행
VIII.a. Eden Korea 커뮤니티는 최소 연 1회 이상 새로운 delegate 선출을 위한 선거를 시행해야 합니다.
IX. 합의자 권한의 범위
IX.a. 선출된 합의자는 EdenOS 스마트 계약 영향력이 미치는 범위 내에서만 합의자로 활동할 수 있습니다. 이 외 다른 범위, 조직, 기타 이해 단체에서 합의자의 지위를 권위적, 금전적, 정치적, 기타 사적 이득을 위해 남용한 경우, 해당 회원은 Eden Korea 커뮤니티에서 영구적으로 제명됩니다.
X. 평화조약의 지위
X.a. 본 평화조약의 하위 규칙은 본 평화조약을 무효화, 변경, 폐지, 연장할 수 없습니다.
XV. 평화조약 및 그 하위 규칙의 해석
XV.a. 본 평화조약 및 그 하위 규칙은 핵심 규칙과 일치하는 방식으로 해석해야 하며 다른 해석이 필요한 경우 Eden Korea EdenOS에 등록된 회원의 ⅔+1 이상이 동의한 투표 결과에 따를 수 있습니다.
XVI. 평화조약 핵심 규칙의 개정
XVI.a. 본 평화조약 핵심 규칙은 어떠한 경우에도 개정할 수 없습니다.)";


const char* eden::bylaws_clause =
    R"(I. 초기 커뮤니티 구성원인 Genesis Call 참여자는 첫 번째 공식 선거가 있을 때까지 부칙을 제안하고 비준할 수 있는 권한을 가집니다.
II. Genesis Call 참여자는 회원이 200명이 될 때까지 최대 20회의 초대식에만 참여하는 것을 원칙으로 합니다.
III. 에덴 코리아(Eden Korea) 공식 선거에서 선출된 수석 합의자 및 최고 합의자는 Eden Korea 평화조약의 세부사항을 규정하거나 설명하기 위해 관련 하위 규칙을 제정할 수 있습니다. 
IV. 하위 규칙은 Eden Korea 평화조약의 보조 규칙인 바, 평화조약에의 동의를 하부 규칙에의 동의에 갈음하며 하위 규칙에 의한 평화조약의 변경, 폐지, 무효화는 금지됩니다.
V. 하위 규칙을 개정함에 있어 반드시 "10. 하위 규칙의 개정 "을 준수해야 합니다.)";
