Felt cute, might delete this later idk

following specs from https://www.json.org/json-en.html

## Usage:
`$ ./parse '<ENTER JSON HERE>'`
- This will print out nested version

### Example:
`$ ./parse '{"abc":[123,{}],"ccc":{"pos":{"x":5,"y":12},"lll":[{},{}]}}'`

outputs

	`{
	  "abc": [
	    123,
	    {}
	  ],
	  "ccc": {
	    "pos": {
	      "x": 5,
	      "y": 12
	    },
	    "lll": [
	      {},
	      {}
	    ]
	  }
	}`
