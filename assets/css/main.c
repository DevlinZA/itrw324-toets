(defrule calc
	(portf (name ?name)(return ?return)(min-amnt ?min-amnt))
	(purse (available ?available))
	(and (test (>= ?return 15)) (test (<= ?min-amnt ?available)))
	=>
	(bind ?slack(- ?available ?min-amnt))
	(assert (slack ?slack))
	(printout t " slack: " ?slack crlf)
	(printout t " portefeulje om in te bele :" ?name crlf))