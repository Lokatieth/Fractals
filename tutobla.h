/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tutobla.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauguen <vbauguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/27 09:19:38 by vbauguen          #+#    #+#             */
/*   Updated: 2016/05/27 11:40:58 by vbauguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TUTOBLA_H
# define TUTOBLA_H

# define A 0x00F4CC, 0x00F3CC, 0x00F3CC, 0x00F3CC, 0x00F3CC, 0x00F3CC
# define B 0x00F3CB, 0x00F3CB, 0x00F2CB, 0x00F2CB, 0x00F2CB, 0x00F2CB
# define C 0x00F2CB, 0x00F2CB, 0x00F1CA, 0x00F1CA, 0x00F1CA, 0x00F1CA
# define D 0x00F1CA, 0x00F1CA, 0x00F1CA, 0x00F0CA, 0x00F0C9, 0x00F0C9
# define E 0x00F0C9, 0x00F0C9, 0x00F0C9, 0x00EFC9, 0x00EFC9, 0x00EFC8
# define F 0x00EFC8, 0x00EFC8, 0x00EFC8, 0x00EEC8, 0x00EEC8, 0x00EEC8
# define G 0x00EEC7, 0x00EEC7, 0x00EEC7, 0x00EDC7, 0x00EDC7, 0x00EDC7
# define H 0x00EDC7, 0x00EDC7, 0x00EDC6, 0x00ECC6, 0x00ECC6, 0x00ECC6
# define I 0x00ECC6, 0x00ECC6, 0x00ECC6, 0x00EBC5, 0x00EBC5, 0x00EBC5
# define J 0x00EBC5, 0x00EBC5, 0x00EBC5, 0x00EAC5, 0x00EAC4, 0x00EAC4
# define K 0x00EAC4, 0x00EAC4, 0x00EAC4, 0x00E9C4, 0x00E9C4, 0x00E9C3
# define L 0x00E9C3, 0x00E9C3, 0x00E8C3, 0x00E8C3, 0x00E8C3, 0x00E8C2
# define M 0x00E8C2, 0x00E8C2, 0x00E7C2, 0x00E7C2, 0x00E7C2, 0x00E7C2
# define N 0x00E7C1, 0x00E7C1, 0x00E6C1, 0x00E6C1, 0x00E6C1, 0x00E6C1
# define O 0x00E6C1, 0x00E5C0, 0x00E5C0, 0x00E5C0, 0x00E5C0, 0x00E5C0
# define P 0x00E5C0, 0x00E4BF, 0x00E4BF, 0x00E4BF, 0x00E4BF, 0x00E4BF
# define Q 0x00E3BF, 0x00E3BF, 0x00E3BE, 0x00E3BE, 0x00E3BE, 0x00E3BE
# define R 0x00E2BE, 0x00E2BE, 0x00E2BD, 0x00E2BD, 0x00E2BD, 0x00E1BD
# define S 0x00E1BD, 0x00E1BD, 0x00E1BD, 0x00E1BC, 0x00E0BC, 0x00E0BC
# define T 0x00E0BC, 0x00E0BC, 0x00E0BC, 0x00DFBB, 0x00DFBB, 0x00DFBB
# define U 0x00DFBB, 0x00DFBB, 0x00DFBB, 0x00DEBA, 0x00DEBA, 0x00DEBA
# define V 0x00DEBA, 0x00DEBA, 0x00DDBA, 0x00DDB9, 0x00DDB9, 0x00DDB9
# define W 0x00DDB9, 0x00DCB9, 0x00DCB9, 0x00DCB8, 0x00DCB8, 0x00DCB8
# define X 0x00DBB8, 0x00DBB8, 0x00DBB8, 0x00DBB7, 0x00DBB7, 0x00DAB7
# define Y 0x00DAB7, 0x00DAB7, 0x00DAB7, 0x00DAB6, 0x00D9B6, 0x00D9B6
# define Z 0x00D9B6, 0x00D9B6, 0x00D9B6, 0x00D8B5, 0x00D8B5, 0x00D8B5
# define AA A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z
# define AB AA, 0x00D8B5, 0x00D8B5, 0x00D7B5, 0x00D7B4, 0x00D7B4
# define AC 0x00D7B4, 0x00D7B4, 0x00D6B4, 0x00D6B4, 0x00D6B3, 0x00D6B3
# define AD 0x00D5B3, 0x00D5B3, 0x00D5B3, 0x00D5B3, 0x00D5B2, 0x00D4B2
# define AE 0x00D4B2, 0x00D4B2, 0x00D4B2, 0x00D4B1, 0x00D3B1, 0x00D3B1
# define AF 0x00D3B1, 0x00D3B1, 0x00D3B1, 0x00D2B0, 0x00D2B0, 0x00D2B0
# define AG 0x00D2B0, 0x00D1B0, 0x00D1B0, 0x00D1AF, 0x00D1AF, 0x00D1AF
# define AH 0x00D0AF, 0x00D0AF, 0x00D0AE, 0x00D0AE, 0x00D0AE, 0x00CFAE
# define AI 0x00CFAE, 0x00CFAE, 0x00CFAD, 0x00CEAD, 0x00CEAD, 0x00CEAD
# define AJ 0x00CEAD, 0x00CEAC, 0x00CDAC, 0x00CDAC, 0x00CDAC, 0x00CDAC
# define AK 0x00CCAC, 0x00CCAB, 0x00CCAB, 0x00CCAB, 0x00CCAB, 0x00CBAB
# define AL 0x00CBAA, 0x00CBAA, 0x00CBAA, 0x00CAAA, 0x00CAAA, 0x00CAA9
# define AM 0x00CAA9, 0x00CAA9, 0x00C9A9, 0x00C9A9, 0x00C9A9, 0x00C9A8
# define AN 0x00C8A8, 0x00C8A8, 0x00C8A8, 0x00C8A8, 0x00C8A7, 0x00C7A7
# define AO 0x00C7A7, 0x00C7A7, 0x00C7A7, 0x00C6A6, 0x00C6A6, 0x00C6A6
# define AP 0x00C6A6, 0x00C5A6, 0x00C5A5, 0x00C5A5, 0x00C5A5, 0x00C5A5
# define AQ 0x00C4A5, 0x00C4A5, 0x00C4A4, 0x00C4A4, 0x00C3A4, 0x00C3A4
# define AR 0x00C3A4, 0x00C3A3, 0x00C2A3, 0x00C2A3, 0x00C2A3, 0x00C2A3
# define AS 0x00C2A2, 0x00C1A2, 0x00C1A2, 0x00C1A2, 0x00C1A2, 0x00C0A1
# define AT 0x00C0A1, 0x00C0A1, 0x00C0A1, 0x00BFA1, 0x00BFA0, 0x00BFA0
# define AU 0x00BFA0, 0x00BEA0, 0x00BEA0, 0x00BE9F, 0x00BE9F, 0x00BD9F
# define AV 0x00BD9F, 0x00BD9F, 0x00BD9E, 0x00BD9E, 0x00BC9E, 0x00BC9E
# define AW 0x00BC9E, 0x00BC9D, 0x00BB9D, 0x00BB9D, 0x00BB9D, 0x00BB9D
# define AX 0x00BA9C, 0x00BA9C, 0x00BA9C, 0x00BA9C, 0x00B99C, 0x00B99B
# define AY 0x00B99B, 0x00B99B, 0x00B89B, 0x00B89A, 0x00B89A, 0x00B89A
# define AZ 0x00B79A, 0x00B79A, 0x00B799, 0x00B799, 0x00B699, 0x00B699
# define BA AB,AC,AD,AE,AF,AG,AH,AI,AJ,AK,AL,AM,AN,AO,AP,AQ,AR,AS,AT
# define BB BA,AU,AV,AW,AX,AY,AZ,0x00B699, 0x00B698, 0x00B598, 0x00B598
# define BC 0x00B598, 0x00B598, 0x00B497, 0x00B497, 0x00B497, 0x00B497
# define BD 0x00B397, 0x00B396, 0x00B396, 0x00B396, 0x00B296, 0x00B295
# define BE 0x00B295, 0x00B295, 0x00B195, 0x00B195, 0x00B194, 0x00B194
# define BF 0x00B094, 0x00B094, 0x00B094, 0x00B093, 0x00AF93, 0x00AF93
# define BG 0x00AF93, 0x00AF92, 0x00AE92, 0x00AE92, 0x00AE92, 0x00AE92
# define BH 0x00AD91, 0x00AD91, 0x00AD91, 0x00AC91, 0x00AC91, 0x00AC90
# define BI 0x00AC90, 0x00AB90, 0x00AB90, 0x00AB8F, 0x00AB8F, 0x00AA8F
# define BJ 0x00AA8F, 0x00AA8F, 0x00AA8E, 0x00A98E, 0x00A98E, 0x00A98E
# define BK 0x00A98D, 0x00A88D, 0x00A88D, 0x00A88D, 0x00A88D, 0x00A78C
# define BL 0x00A78C, 0x00A78C, 0x00A68C, 0x00A68B, 0x00A68B, 0x00A68B
# define BM 0x00A58B, 0x00A58B, 0x00A58A, 0x00A58A, 0x00A48A, 0x00A48A
# define BN 0x00A489, 0x00A489, 0x00A389, 0x00A389, 0x00A389, 0x00A288
# define BO 0x00A288, 0x00A288, 0x00A288, 0x00A187, 0x00A187, 0x00A187
# define BP 0x00A187, 0x00A087, 0x00A086, 0x00A086, 0x009F86, 0x009F86
# define BQ 0x009F85, 0x009F85, 0x009E85, 0x009E85, 0x009E85, 0x009E84
# define BR 0x009D84, 0x009D84, 0x009D84, 0x009C83, 0x009C83, 0x009C83
# define BS 0x009C83, 0x009B82, 0x009B82, 0x009B82, 0x009B82, 0x009A82
# define BT 0x009A81, 0x009A81, 0x009981, 0x009981, 0x009980, 0x009980
# define BU 0x009880, 0x009880, 0x00987F, 0x00977F, 0x00977F, 0x00977F
# define BV 0x00977E, 0x00967E, 0x00967E, 0x00967E, 0x00957E, 0x00957D
# define BW 0x00957D, 0x00957D, 0x00947D, 0x00947C, 0x00947C, 0x00947C
# define BX 0x00937C, 0x00937B, 0x00937B, 0x00927B, 0x00927B, 0x00927A
# define BY 0x00927A, 0x00917A, 0x00917A, 0x00917A, 0x009079, 0x009079
# define BZ 0x009079, 0x009079, 0x008F78, 0x008F78, 0x008F78, 0x008E78
# define CA BB,BC,BD,BE,BF,BG,BH,BI,BJ,BK,BL,BM,BN,BO,BP,BQ,BR,BS,BT
# define CB CA,BU,BV,BW,BX,BY,BZ,0x008E77, 0x008E77, 0x008E77, 0x008D77
# define CC 0x008D76, 0x008D76, 0x008C76, 0x008C76, 0x008C75, 0x008C75
# define CD 0x008B75, 0x008B75, 0x008B74, 0x008A74, 0x008A74, 0x008A74
# define CE 0x008974, 0x008973, 0x008973, 0x008973, 0x008873, 0x008872
# define CF 0x008872, 0x008772, 0x008772, 0x008771, 0x008771, 0x008671
# define CG 0x008671, 0x008670, 0x008570, 0x008570, 0x008570, 0x00856F
# define CH 0x00846F, 0x00846F, 0x00846F, 0x00836E, 0x00836E, 0x00836E
# define CI 0x00826E, 0x00826D, 0x00826D, 0x00826D, 0x00816D, 0x00816C
# define CJ 0x00816C, 0x00806C, 0x00806C, 0x00806B, 0x007F6B, 0x007F6B
# define CK 0x007F6B, 0x007F6A, 0x007E6A, 0x007E6A, 0x007E6A, 0x007D69
# define CL 0x007D69, 0x007D69, 0x007D69, 0x007C68, 0x007C68, 0x007C68
# define CM 0x007B68, 0x007B67, 0x007B67, 0x007A67, 0x007A67, 0x007A66
# define CN 0x007A66, 0x007966, 0x007966, 0x007966, 0x007865, 0x007865
# define CO 0x007865, 0x007865, 0x007764, 0x007764, 0x007764, 0x007664
# define CP 0x007663, 0x007663, 0x007663, 0x007563, 0x007562, 0x007562
# define CQ 0x007462, 0x007462, 0x007461, 0x007461, 0x007361, 0x007361
# define CR 0x007360, 0x007260, 0x007260, 0x007260, 0x00725F, 0x00715F
# define CS 0x00715F, 0x00715F, 0x00705F, 0x00705E, 0x00705E, 0x00705E
# define CT 0x006F5E, 0x006F5D, 0x006F5D, 0x006E5D, 0x006E5D, 0x006E5C
# define CU 0x006E5C, 0x006D5C, 0x006D5C, 0x006D5B, 0x006C5B, 0x006C5B
# define CV 0x006C5B, 0x006C5B, 0x006B5A, 0x006B5A, 0x006B5A, 0x006A5A
# define CW 0x006A59, 0x006A59, 0x006A59, 0x006959, 0x006958, 0x006958
# define CX 0x006958, 0x006858, 0x006857, 0x006857, 0x006757, 0x006757
# define CY 0x006757, 0x006756, 0x006656, 0x006656, 0x006656, 0x006555
# define CZ 0x006555, 0x006555, 0x006555, 0x006454, 0x006454, 0x006454
# define DA CB,CC,CD,CE,CF,CG,CH,CI,CJ,CK,CL,CM,CN,CO,CP,CQ,CR,CS,CT
# define DB DA,CU,CV,CW,CX,CY,CZ,0x006454, 0x006354, 0x006353, 0x006353
# define DC 0x006253, 0x006253, 0x006252, 0x006252, 0x006152, 0x006152
# define DD 0x006152, 0x006151, 0x006051, 0x006051, 0x006051, 0x005F50
# define DE 0x005F50, 0x005F50, 0x005F50, 0x005E4F, 0x005E4F, 0x005E4F
# define DF 0x005E4F, 0x005D4F, 0x005D4E, 0x005D4E, 0x005C4E, 0x005C4E
# define DG 0x005C4D, 0x005C4D, 0x005B4D, 0x005B4D, 0x005B4D, 0x005B4C
# define DH 0x005A4C, 0x005A4C, 0x005A4C, 0x005A4B, 0x00594B, 0x00594B
# define DI 0x00594B, 0x00584B, 0x00584A, 0x00584A, 0x00584A, 0x00574A
# define DJ 0x005749, 0x005749, 0x005749, 0x005649, 0x005649, 0x005648
# define DK 0x005648, 0x005548, 0x005548, 0x005548, 0x005547, 0x005447
# define DL 0x005447, 0x005447, 0x005446, 0x005346, 0x005346, 0x005346
# define DM 0x005246, 0x005245, 0x005245, 0x005245, 0x005145, 0x005144
# define DN 0x005144, 0x005144, 0x005044, 0x005044, 0x005043, 0x005043
# define DO 0x004F43, 0x004F43, 0x004F43, 0x004F42, 0x004E42, 0x004E42
# define DP 0x004E42, 0x004E41, 0x004D41, 0x004D41, 0x004D41, 0x004D41
# define DQ 0x004C40, 0x004C40, 0x004C40, 0x004C40, 0x004B40, 0x004B3F
# define DR 0x004B3F, 0x004B3F, 0x004A3F, 0x004A3F, 0x004A3E, 0x004A3E
# define DS 0x00493E, 0x00493E, 0x00493D, 0x00493D, 0x00483D, 0x00483D
# define DT 0x00483D, 0x00483C, 0x00473C, 0x00473C, 0x00473C, 0x00473C
# define DU 0x00463B, 0x00463B, 0x00463B, 0x00463B, 0x00453B, 0x00453A
# define DV 0x00453A, 0x00453A, 0x00443A, 0x00443A, 0x004439, 0x004439
# define DW 0x004339, 0x004339, 0x004339, 0x004338, 0x004238, 0x004238
# define DX 0x004238, 0x004237, 0x004137, 0x004137, 0x004137, 0x004137
# define DY 0x004036, 0x004036, 0x004036, 0x004036, 0x003F36, 0x003F35
# define DZ 0x003F35, 0x003F35, 0x003E35, 0x003E35, 0x003E34, 0x003E34
# define EA DB,DC,DD,DE,DF,DG,DH,DI,DJ,DK,DL,DM,DN,DO,DP,DQ,DR,DS,DT
# define EB EA,DU,DV,DW,DX,DY,DZ,0x003E34, 0x003D34, 0x003D34, 0x003D33
# define EC 0x003D33, 0x003C33, 0x003C33, 0x003C33, 0x003C32, 0x003B32
# define ED 0x003B32, 0x003B32, 0x003B32, 0x003A31, 0x003A31, 0x003A31
# define EE 0x003A31, 0x003931, 0x003930, 0x003930, 0x003930, 0x003930
# define EF 0x003830, 0x003830, 0x00382F, 0x00382F, 0x00372F, 0x00372F
# define EG 0x00372F, 0x00372E, 0x00362E, 0x00362E, 0x00362E, 0x00362E
# define EH 0x00352D, 0x00352D, 0x00352D, 0x00352D, 0x00352D, 0x00342C
# define EI 0x00342C, 0x00342C, 0x00342C, 0x00332C, 0x00332B, 0x00332B
# define EJ 0x00332B, 0x00322B, 0x00322B, 0x00322B, 0x00322A, 0x00322A
# define EK 0x00312A, 0x00312A, 0x00312A, 0x003129, 0x003029, 0x003029
# define EL 0x003029, 0x003029, 0x003028, 0x002F28, 0x002F28, 0x002F28
# define EM 0x002F28, 0x002E27, 0x002E27, 0x002E27, 0x002E27, 0x002E27
# define EN 0x002D27, 0x002D26, 0x002D26, 0x002D26, 0x002C26, 0x002C26
# define EO 0x002C25, 0x002C25, 0x002C25, 0x002B25, 0x002B25, 0x002B25
# define EP 0x002B24, 0x002A24, 0x002A24, 0x002A24, 0x002A24, 0x002A23
# define EQ 0x002923, 0x002923, 0x002923, 0x002923, 0x002823, 0x002822
# define ER 0x002822, 0x002822, 0x002822, 0x002722, 0x002721, 0x002721
# define ES 0x002721, 0x002621, 0x002621, 0x002621, 0x002620, 0x002620
# define ET 0x002520, 0x002520, 0x002520, 0x00251F, 0x00251F, 0x00241F
# define EU 0x00241F, 0x00241F, 0x00241F, 0x00231E, 0x00231E, 0x00231E
# define EV 0x00231E, 0x00231E, 0x00221E, 0x00221D, 0x00221D, 0x00221D
# define EW 0x00221D, 0x00211D, 0x00211D, 0x00211C, 0x00211C, 0x00211C
# define EX 0x00201C, 0x00201C, 0x00201B, 0x00201B, 0x00201B, 0x001F1B
# define EY 0x001F1B, 0x001F1B, 0x001F1A, 0x001F1A, 0x001E1A, 0x001E1A
# define EZ 0x001E1A, 0x001E1A, 0x001E19, 0x001D19, 0x001D19, 0x001D19
# define FA EB,EC,ED,EE,EF,EG,EH,EI,EJ,EK,EL,EM,EN,EO,EP,EQ,ER,ES,ET
# define FB FA,EU,EV,EW,EX,EY,EZ,0x001D19, 0x001D19, 0x001D18, 0x001C18
# define FC 0x001C18, 0x001C18, 0x001C18, 0x001C18, 0x001B17, 0x001B17
# define FD 0x001B17, 0x001B17, 0x001B17, 0x001A17, 0x001A16, 0x001A16
# define FE 0x001A16, 0x001A16, 0x001916, 0x001915, 0x001915, 0x001915
# define FF 0x001915, 0x001815, 0x001815, 0x001814, 0x001814, 0x001814
# define FG 0x001714, 0x001714, 0x001713, 0x001713, 0x001713, 0x001613
# define FH 0x001613, 0x001612, 0x001612, 0x001512, 0x001512, 0x001512
# define FI 0x001511, 0x001511, 0x001411, 0x001411, 0x001411, 0x001410
# define FJ 0x001310, 0x001310, 0x001310, 0x00130F, 0x00120F, 0x00120F
# define FK 0x00120F, 0x00120E, 0x00110E, 0x00110E, 0x00110E, 0x00100E
# define FL 0x00100D, 0x00100D, 0x00100D, 0x000F0C, 0x000F0C, 0x000F0C
# define FM 0x000E0C, 0x000E0B, 0x000E0B, 0x000D0B, 0x000D0B, 0x000D0A
# define FN 0x000D0A, 0x000C0A, 0x000C09, 0x000B09, 0x000B09, 0x000B08
# define FO 0x000A08, 0x000A08, 0x000A08, 0x000907, 0x000907, 0x000807
# define FP 0x000806, 0x000806, 0x000706, 0x000705, 0x000605, 0x000605
# define FQ 0x000604, 0x000504, 0x000504, 0x000504, 0x000403, 0x000403
# define FR 0x000303, 0x000302, 0x000302, 0x000202, 0x000201, 0x000201
# define FS 0x000101, 0x000101, 0x000000
# define TUTOBLA FB,FC,FD,FE,FF,FG,FH,FI,FJ,FK,FL,FM,FN,FO,FP,FQ,FR,FS

#endif