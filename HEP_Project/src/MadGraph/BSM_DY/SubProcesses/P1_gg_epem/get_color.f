      FUNCTION GET_COLOR(IPDG)
      IMPLICIT NONE
      INTEGER GET_COLOR, IPDG

      IF(IPDG.EQ.-11)THEN
        GET_COLOR=1
        RETURN
      ELSE IF(IPDG.EQ.11)THEN
        GET_COLOR=1
        RETURN
      ELSE IF(IPDG.EQ.21)THEN
        GET_COLOR=8
        RETURN
      ELSE IF(IPDG.EQ.25)THEN
        GET_COLOR=1
        RETURN
      ELSE IF(IPDG.EQ.35)THEN
        GET_COLOR=1
        RETURN
      ELSE IF(IPDG.EQ.7)THEN
C       This is dummy particle used in multiparticle vertices
        GET_COLOR=2
        RETURN
      ELSE
        WRITE(*,*)'Error: No color given for pdg ',IPDG
        GET_COLOR=0
        RETURN
      ENDIF
      END

