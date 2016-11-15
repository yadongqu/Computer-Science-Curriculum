test = {
  'name': 'Question 15',
  'partner': 'A',
  'points': 2,
  'suites': [
    {
      'cases': [
        {
          'code': r"""
          scm> (cond ((> 2 3) 5)
          ....       ((> 2 4) 6)
          ....       ((< 2 5) 7)
          ....       (else 8))
          e77a463e6fdad58c030d86886daed204
          # locked
          scm> (cond ((> 2 3) 5)
          ....       ((> 2 4) 6)
          ....       (else 8))
          47b3d31e7cbc26676385e887f119fbf1
          # locked
          """,
          'hidden': False,
          'locked': True
        }
      ],
      'scored': True,
      'setup': '',
      'teardown': '',
      'type': 'scheme'
    },
    {
      'cases': [
        {
          'code': r"""
          scm> (cond ((> 2 3) 5)
          ....       ((> 2 4) 6)
          ....       ((< 2 5) 7))
          7
          scm> (cond ((> 2 3) (display 'oops) (newline))
          ....       (else 9))
          9
          scm> (cond ((< 2 1))
          ....       ((> 3 2))
          ....       (else 5))
          True
          scm> (cond (#f 1))
          okay
          scm> (cond ((= 4 3) 'nope)
          ....       ((= 4 4) 'hi)
          ....       (else 'wat))
          hi
          scm> (cond ((= 4 3) 'wat)
          ....       ((= 4 4))
          ....       (else 'hm))
          True
          scm> (cond ((= 4 4) (+ 40 2))
          ....       (else 'wat 0))
          42
          scm> (cond (12))
          12
          scm> (cond ((= 4 3))
          ....       ('hi))
          hi
          scm> (eval (cond (False 1) (False 2)))
          okay
          """,
          'hidden': False,
          'locked': False
        },
        {
          'code': r"""
          scm> (cond (0 'yea)
          ....       (else 'nay))
          yea
          """,
          'hidden': False,
          'locked': False
        },
        {
          'code': r"""
          scm> (define x 0)
          x
          scm> (define y 0)
          y
          scm> (define z 0)
          z
          scm> (cond (#t
          ....        (define x (+ x 1))
          ....        (define y (+ y 1))
          ....        (define z (+ z 1)))
          ....       (else
          ....        (define x (- x 5))
          ....        (define y (- y 5))
          ....        (define z (- z 5))))
          z
          scm> (list x y z)
          (1 1 1)
          """,
          'hidden': False,
          'locked': False
        },
        {
          'code': r"""
          scm> (define (print-and-false val)
          ....         (print val)
          ....         #f)
          print-and-false
          scm> (cond ((print-and-false 'cond1))
          ....       ((print-and-false 'cond2))
          ....       ((print-and-false 'cond3))
          ....       ((print-and-false 'cond4)))
          cond1
          cond2
          cond3
          cond4
          okay
          scm> (define (print-and-true val)
          ....         (print val)
          ....         #t)
          print-and-true
          scm> (cond ((print-and-false 'cond1))
          ....       ((print-and-false 'cond2))
          ....       ((print-and-true 'cond3))
          ....       ((print-and-false 'cond4)))
          cond1
          cond2
          cond3
          True
          """,
          'hidden': False,
          'locked': False
        }
      ],
      'scored': True,
      'setup': '',
      'teardown': '',
      'type': 'scheme'
    }
  ]
}
